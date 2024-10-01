using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class carMove : MonoBehaviour
{

    public AudioSource audioSource;
    public AudioClip[] sfx;

    public float effect = 1;

    void Start()
    {
        if (GameObject.Find("GameController").GetComponent<GameController>().halfCars == true && Random.Range(0, 2) == 1)
            Destroy(gameObject);
        else
        {
            if (PlayerPrefs.GetInt("difficulty") == 1)
                Destroy(gameObject, (7f * effect));
            if (PlayerPrefs.GetInt("difficulty") == 2)
                Destroy(gameObject, (3.5f * effect));
            if (PlayerPrefs.GetInt("difficulty") == 3)
                Destroy(gameObject, (2.5f * effect));
            if (PlayerPrefs.GetInt("difficulty") == 4)
                Destroy(gameObject, (1.5f * effect));
        }
    }

    void Update()
    {
        if (GameObject.Find("GameController").GetComponent<GameController>().slowTime == true)
            effect = 2;
        else
            effect = 1;

        if (GameObject.Find("XR Origin").GetComponent<deathDetect>().dead == false)
        {
            if (Mathf.Abs(GameObject.Find("GameController").GetComponent<GameController>().playerPos.position.x - transform.position.x) < 0.1)
            {
                audioSource.PlayOneShot(sfx[0], 0.2f);
            }
            if (Mathf.Abs(GameObject.Find("GameController").GetComponent<GameController>().playerPos.position.x - transform.position.x) < 2 && Mathf.Abs(GameObject.Find("GameController").GetComponent<GameController>().playerPos.position.z - transform.position.z) < 2)
            {
                audioSource.PlayOneShot(sfx[Random.Range(1, 4)], 0.5f);
            }
        }   
    }

    void FixedUpdate()
    {

        if (transform.rotation.eulerAngles.y < 100)
            transform.position += new Vector3(((Random.Range(-0.15f, -0.05f) / effect) * PlayerPrefs.GetInt("difficulty")), 0, 0);
        else
            transform.position += new Vector3(((Random.Range(0.05f, 0.15f) / effect) * PlayerPrefs.GetInt("difficulty")), 0, 0);

    }

}
