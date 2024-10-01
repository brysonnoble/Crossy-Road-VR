using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class scoreDetector : MonoBehaviour
{

    public GameController gameCont;

    void OnCollisionEnter(Collision col)
    {
        if (col.collider.tag == "sd")
            if (GameObject.Find("GameController").GetComponent<GameController>().doubleScore == true)
                gameCont.score += 2;
            else
                gameCont.score += 1;
    }
}
