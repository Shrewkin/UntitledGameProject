using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(InputHandler))]
public class PlayerController : MonoBehaviour
{
    // Var for input handler
    private InputHandler _input;

    // bool to rotate towards mouse
    [SerializeField]
    private bool RotateTowardMouse;

    // Movement speed and rotation speed
    [SerializeField]
    private float MovementSpeed;
    [SerializeField]
    private float RotationSpeed;
    [SerializeField]
    private float VerticalSpeed;

    // Pointer to the camera
    [SerializeField]
    private Camera Camera;

    // Bool to allow player to go up and down
    [SerializeField]
    private bool VerticalTraverseBool;

    private void Awake()
    {
        // Initializes input as the input handler component
        _input = GetComponent<InputHandler>();
    }

    // Update is called once per frame
    void Update()
    {
        // Creates a target vector in the direction of the mouse
        var targetVector = new Vector3(_input.InputVector.x, 0, _input.InputVector.y);
        var movementVector = MoveTowardTarget(targetVector);

        if (!RotateTowardMouse)
        {
            RotateTowardMovementVector(movementVector);
        }

        if (RotateTowardMouse)
        {
            RotateFromMouseVector();
        }

    }

    private void RotateFromMouseVector()
    {
        Ray ray = Camera.ScreenPointToRay(_input.MousePosition);

        if (Physics.Raycast(ray, out RaycastHit hitInfo, maxDistance: 300f))
        {
            var target = hitInfo.point;
            target.y = transform.position.y;
            transform.LookAt(target);
        }
    }

    private Vector3 MoveTowardTarget(Vector3 targetVector)
    {
        var horizontalSpeed = MovementSpeed * Time.deltaTime;
        var verticalSpeed = VerticalSpeed * Time.deltaTime;

        targetVector = Quaternion.Euler(0, Camera.gameObject.transform.rotation.eulerAngles.y, 0) * targetVector;

        if (VerticalTraverseBool)
        {
            targetVector = VerticalTraverse(targetVector);
        }

        var targetPosition = transform.position + targetVector * horizontalSpeed;

        transform.position = targetPosition;
        return targetVector;
    }

    private void RotateTowardMovementVector(Vector3 movementDirection)
    {
        if (movementDirection.magnitude == 0) { return; }
        var rotation = Quaternion.LookRotation(movementDirection);
        transform.rotation = Quaternion.RotateTowards(transform.rotation, rotation, RotationSpeed);
    }

    // Moves the player up and down
    private Vector3 VerticalTraverse(Vector3 targetVector)
    {
        var speed = VerticalSpeed * Time.deltaTime;

        // If space pressed, go up
        if (Input.GetKey(KeyCode.Space))
        {
            targetVector.y = VerticalSpeed + targetVector.y;
        }
        // If shift is pressed, go down
        if (Input.GetKey(KeyCode.LeftShift))
        {
            targetVector.y = -VerticalSpeed + targetVector.y;
        }

        return targetVector;
    }
}