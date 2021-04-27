using UnityEngine;
using System.Collections;

public class PlayerController : MonoBehaviour
{

	public float speed = 6.0F;

	private Vector3 moveDirection = Vector3.zero;
	public CharacterController controller;

	void Start()
	{
		// Store reference to attached component
		controller = GetComponent<CharacterController>();
	}

	void Update()
	{
		// Use input up and down for direction, multiplied by speed
		moveDirection = new Vector3(Input.GetAxis("Horizontal"), 0, Input.GetAxis("Vertical"));
		moveDirection = transform.TransformDirection(moveDirection);
		moveDirection *= speed;
		
		// Move Character Controller
		controller.Move(moveDirection * Time.deltaTime);
	}
}