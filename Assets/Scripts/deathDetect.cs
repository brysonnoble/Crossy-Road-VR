using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class deathDetect : MonoBehaviour
{

    public GameController gameCont;

    public GameObject menu;
    public GameObject gui;
    public GameObject PUPtext;

    public AudioSource crashSound;

    public Text scoreText;
    public Text deathMessage;

    public bool dead = false;

    private string[] messages = new string[] { "You suck", "Get good", "Stop sucking", "This is embarrassing", "Please stop playing", "Go outside", "L", "Ur trash kid"};

    private void OnCollisionEnter(Collision col)
    {
        if (col.collider.tag == "kill")
        {
            dead = true;
            crashSound.PlayOneShot(crashSound.clip, 5);
            PUPtext.SetActive(false);
            Time.timeScale = 0;
            deathMessage.text = messages[Random.Range(0, messages.Length)];
            scoreText.text = ("Score: " + gameCont.score.ToString());
            menu.SetActive(true);
        }
    }

}
