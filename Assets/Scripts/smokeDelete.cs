using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class smokeDelete : MonoBehaviour
{

    public GameObject road;
    public GameObject tree;
    public GameObject sd;
    public GameObject[] PUPs;

    private void OnTriggerEnter(Collider col)
    {
        if (gameObject.tag == "sd")
        {
            Instantiate(sd, new Vector3(0, -1, (transform.position.z + 66)), Quaternion.identity);
            if (Random.Range(0, 2) == 1)
            {
                Instantiate(road, new Vector3(0, 0, (transform.position.z + 66)), Quaternion.identity);
            }
            else
            {
                for (int ii = 0; ii < Random.Range(2, 9); ii++)
                    Instantiate(tree, new Vector3((transform.position.x + Random.Range(-14, 14)), 0, ((transform.position.z + 66) + Random.Range(-0.5f, 0.5f))), Quaternion.identity);
            }
            if (Random.Range(0, 5) == 0)
            {
                Instantiate(PUPs[Random.Range(0, 4)], new Vector3((transform.position.x + Random.Range(-14, 14)), 1, (transform.position.z + 66)), Quaternion.identity);
            }
        }
        
        Destroy(gameObject);
    }

}