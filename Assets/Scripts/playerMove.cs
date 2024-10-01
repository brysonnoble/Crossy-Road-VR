using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class playerMove : MonoBehaviour
{

    public Transform cont;

    void Update()
    {
        transform.position = new Vector3(cont.transform.position.x, transform.position.y, cont.transform.position.z);
    }
}
