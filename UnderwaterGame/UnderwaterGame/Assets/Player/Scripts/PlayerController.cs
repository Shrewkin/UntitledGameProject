using UnityEngine;
using System.Collections;

public class PlayerController : MonoBehaviour
{
	// Movement System
	public float speed = 5.0f;
	public float maxSpeed = 10.0f;
	float curSpeed;
	
	// Rotation System
    private Vector3 mousePos;

	Rigidbody rigid;
	private void Start()
	{
		rigid = GetComponent<Rigidbody>();
	}

	private void FixedUpdate()
	{
		Movement();
		Rotation();
	}

	void Movement()
	{
		curSpeed = speed;
		maxSpeed = curSpeed;
		
		// Movement Logic
		rigid.velocity = new Vector3(
			Mathf.Lerp(0, Input.GetAxis("Horizontal") * curSpeed, 0.8f),
			rigid.velocity.y,
			Mathf.Lerp(0, Input.GetAxis("Vertical") * curSpeed, 0.8f)
		);
	}

	void Rotation()
	{
	}
}