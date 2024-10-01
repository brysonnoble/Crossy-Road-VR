using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GameController : MonoBehaviour
{

    public GameObject ground;
    public GameObject border;
    public GameObject road;
    public GameObject tree;
    public GameObject sd;
    public GameObject postProcessing;
    public GameObject[] PUPs;

    public Transform playerPos;

    public Text scoreText;

    public int tickCount;
    public int score;

    public bool doubleScore = false;
    public bool halfCars = false;
    public bool slowTime = false;

    void Awake()
    {

        for (int i = 0; i < 22; i++)
        {
            Instantiate(sd, new Vector3(0, -1, (((transform.position.z + i) * 3) - 25)), Quaternion.identity);
            if (PlayerPrefs.GetInt("difficulty") > 1)
            {
                if (Random.Range(0, 2) == 1)
                {
                    Instantiate(road, new Vector3(0, 0, (((transform.position.z + i) * 3) - 25)), Quaternion.identity);
                }
                else
                {
                    for (int ii = 0; ii < Random.Range(2, 9); ii++)
                        Instantiate(tree, new Vector3((transform.position.x + Random.Range(-14, 14)), 0, ((transform.position.z + i) * 3) + Random.Range(-0.5f, 0.5f) - 25), Quaternion.identity);
                }
                if (Random.Range(0, 5) == 0)
                {
                    Instantiate(PUPs[Random.Range(0, 4)], new Vector3((transform.position.x + Random.Range(-14, 14)), 1, (((transform.position.z + i) * 3) - 25)), Quaternion.identity);
                }
            }
            else
            {
                if (Random.Range(0, 5) > 2)
                {
                    Instantiate(road, new Vector3(0, 0, (((transform.position.z + i) * 3) - 25)), Quaternion.identity);
                }
                else
                {
                    for (int ii = 0; ii < Random.Range(2, 9); ii++)
                        Instantiate(tree, new Vector3((transform.position.x + Random.Range(-14, 14)), 0, ((transform.position.z + i) * 3) + Random.Range(-0.5f, 0.5f) - 25), Quaternion.identity);
                }
                if (Random.Range(0, 5) == 0)
                {
                    Instantiate(PUPs[Random.Range(0, 4)], new Vector3((transform.position.x + Random.Range(-14, 14)), 1, (((transform.position.z + i) * 3) - 25)), Quaternion.identity);
                }
            }
            
        }

    }

    void Update()
    {
        scoreText.text = score.ToString();

        if (GameObject.Find("XR Origin").GetComponent<deathDetect>().dead == true)
        {
            scoreText.text = "";
            postProcessing.SetActive(true);
        }

        if (doubleScore == true)
        {
            StartCoroutine(PUP1(5.0f));
        }
        if (halfCars == true)
        {
            StartCoroutine(PUP2(5.0f));
            
        }
        if (slowTime == true)
        {
            StartCoroutine(PUP3(5.0f));
        }
    }

    public void FixedUpdate()
    {
        tickCount += 1;

        if (tickCount >= 50)
        {
            ground.transform.position = (new Vector3(0, 0, (playerPos.position.z + 30)));
            border.transform.position = (new Vector3(0, 2.5f, (playerPos.position.z + 30)));

            tickCount = 0;
        }
    }

    IEnumerator PUP1(float time)
    {
        yield return new WaitForSeconds(time);
        doubleScore = false;
    }
    IEnumerator PUP2(float time)
    {
        yield return new WaitForSeconds(time);
        halfCars = false;
    }
    IEnumerator PUP3(float time)
    {
        yield return new WaitForSeconds(time);
        slowTime = false;
    }

}
