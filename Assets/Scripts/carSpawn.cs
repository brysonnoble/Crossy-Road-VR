using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class carSpawn : MonoBehaviour
{

    public GameObject car1;
    public GameObject car2;
    public GameObject car3;

    public int tickCount;

    public int carType;

    void FixedUpdate()
    {
        tickCount += 1;
        carType = Random.Range(0, 3);
        if (PlayerPrefs.GetInt("difficulty") < 3)
        {
            if (tickCount >= 40 && Mathf.Abs(GameObject.Find("GameController").GetComponent<GameController>().playerPos.position.z - transform.position.z) < 25)
            {
                if (Random.Range(0, 2) == 1)
                {
                    if (carType == 0)
                        Instantiate(car1, new Vector3(-16.5f, 0.485f, (transform.position.z - 0.9f)), Quaternion.Euler(new Vector3(0, 270, 0)));
                    if (carType == 1)
                        Instantiate(car2, new Vector3(-16.5f, 0.485f, (transform.position.z - 0.9f)), Quaternion.Euler(new Vector3(0, 270, 0)));
                    if (carType == 2)
                        Instantiate(car3, new Vector3(-16.5f, 0.485f, (transform.position.z - 0.9f)), Quaternion.Euler(new Vector3(0, 270, 0)));
                }
                else
                {
                    if (carType == 0)
                        Instantiate(car1, new Vector3(16.5f, 0.485f, (transform.position.z + 0.9f)), Quaternion.Euler(new Vector3(0, 90, 0)));
                    if (carType == 1)
                        Instantiate(car2, new Vector3(16.5f, 0.485f, (transform.position.z + 0.9f)), Quaternion.Euler(new Vector3(0, 90, 0)));
                    if (carType == 2)
                        Instantiate(car3, new Vector3(16.5f, 0.485f, (transform.position.z + 0.9f)), Quaternion.Euler(new Vector3(0, 90, 0)));
                }

                tickCount = 0;
            }
        }
        if (PlayerPrefs.GetInt("difficulty") == 3)
        {
            if (tickCount >= 30 && Mathf.Abs(GameObject.Find("GameController").GetComponent<GameController>().playerPos.position.z - transform.position.z) < 25)
            {
                if (Random.Range(0, 2) == 1)
                {
                    if (carType == 0)
                        Instantiate(car1, new Vector3(-16.5f, 0.485f, (transform.position.z - 0.9f)), Quaternion.Euler(new Vector3(0, 270, 0)));
                    if (carType == 1)
                        Instantiate(car2, new Vector3(-16.5f, 0.485f, (transform.position.z - 0.9f)), Quaternion.Euler(new Vector3(0, 270, 0)));
                    if (carType == 2)
                        Instantiate(car3, new Vector3(-16.5f, 0.485f, (transform.position.z - 0.9f)), Quaternion.Euler(new Vector3(0, 270, 0)));
                }
                else
                {
                    if (carType == 0)
                        Instantiate(car1, new Vector3(16.5f, 0.485f, (transform.position.z + 0.9f)), Quaternion.Euler(new Vector3(0, 90, 0)));
                    if (carType == 1)
                        Instantiate(car2, new Vector3(16.5f, 0.485f, (transform.position.z + 0.9f)), Quaternion.Euler(new Vector3(0, 90, 0)));
                    if (carType == 2)
                        Instantiate(car3, new Vector3(16.5f, 0.485f, (transform.position.z + 0.9f)), Quaternion.Euler(new Vector3(0, 90, 0)));
                }

                tickCount = 0;
            }
        }
        if (PlayerPrefs.GetInt("difficulty") == 4)
        {
            if (tickCount >= 20 && Mathf.Abs(GameObject.Find("GameController").GetComponent<GameController>().playerPos.position.z - transform.position.z) < 25)
            {
                if (Random.Range(0, 2) == 1)
                {
                    if (carType == 0)
                        Instantiate(car1, new Vector3(-16.5f, 0.485f, (transform.position.z - 0.9f)), Quaternion.Euler(new Vector3(0, 270, 0)));
                    if (carType == 1)
                        Instantiate(car2, new Vector3(-16.5f, 0.485f, (transform.position.z - 0.9f)), Quaternion.Euler(new Vector3(0, 270, 0)));
                    if (carType == 2)
                        Instantiate(car3, new Vector3(-16.5f, 0.485f, (transform.position.z - 0.9f)), Quaternion.Euler(new Vector3(0, 270, 0)));
                }
                else
                {
                    if (carType == 0)
                        Instantiate(car1, new Vector3(16.5f, 0.485f, (transform.position.z + 0.9f)), Quaternion.Euler(new Vector3(0, 90, 0)));
                    if (carType == 1)
                        Instantiate(car2, new Vector3(16.5f, 0.485f, (transform.position.z + 0.9f)), Quaternion.Euler(new Vector3(0, 90, 0)));
                    if (carType == 2)
                        Instantiate(car3, new Vector3(16.5f, 0.485f, (transform.position.z + 0.9f)), Quaternion.Euler(new Vector3(0, 90, 0)));
                }

                tickCount = 0;
            }
        }
    }

}
