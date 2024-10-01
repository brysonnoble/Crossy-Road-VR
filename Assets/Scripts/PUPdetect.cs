using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PUPdetect : MonoBehaviour
{

    public GameObject PUPtext;

    public Text PUPNotif;

    void OnTriggerEnter(Collider col)
    {
        if (col.tag == "+5")
        {
            PUPtext.SetActive(true);
            GameObject.Find("GameController").GetComponent<GameController>().score += 5;
            PUPNotif.text = "5 Points\nAdded";
            StartCoroutine(PUPText(0.15f));
            StartCoroutine(hidePUPText(1.5f));
        }
        if (col.tag == "dScore")
        {
            PUPtext.SetActive(true);
            GameObject.Find("GameController").GetComponent<GameController>().doubleScore = true;
            PUPNotif.text = "Score\nDoubled";
            StartCoroutine(PUPText(0.15f));
            StartCoroutine(hidePUPText(1.5f));
        }
        if (col.tag == "halfCar")
        {
            PUPtext.SetActive(true);
            GameObject.Find("GameController").GetComponent<GameController>().halfCars = true;
            PUPNotif.text = "Car\nSpawns\nReduced";
            StartCoroutine(PUPText(0.15f));
            StartCoroutine(hidePUPText(1.5f));
        }
        if (col.tag == "timeSlow")
        {
            PUPtext.SetActive(true);
            GameObject.Find("GameController").GetComponent<GameController>().slowTime = true;
            PUPNotif.text = "Cars\nSlowed";
            StartCoroutine(PUPText(0.15f));
            StartCoroutine(hidePUPText(1.5f));
        }

        Destroy(col.gameObject);
    }

    IEnumerator PUPText(float time)
    {
        for (int i = 0; i < 10; i++)
        {
            yield return new WaitForSeconds(time);
            if (PUPNotif.color == Color.red)
                PUPNotif.color = Color.white;
            else
                PUPNotif.color = Color.red;
        }
    }

    IEnumerator hidePUPText(float time)
    {
        yield return new WaitForSeconds(time);
        PUPtext.SetActive(false);
    }

}