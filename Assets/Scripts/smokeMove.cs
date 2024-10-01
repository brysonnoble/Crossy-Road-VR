using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class smokeMove : MonoBehaviour
{

    public Transform player;

    private void Update()
    {
        if (Mathf.Abs(player.transform.position.z  - transform.position.z) > 6)
        {
            transform.position = new Vector3(0, 0, (player.transform.position.z - 6));
        }
    }

    void FixedUpdate()
    {
        transform.position += new Vector3(0, 0, (0.01f * PlayerPrefs.GetInt("difficulty")));
    }

}
