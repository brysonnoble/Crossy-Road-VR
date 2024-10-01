using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class startMenu : MonoBehaviour
{

    public GameObject mainMenu;
    public GameObject diffMenu;

    public void play()
    {
        mainMenu.SetActive(false);
        diffMenu.SetActive(true);
    }
    public void main()
    {
        diffMenu.SetActive(false);
        mainMenu.SetActive(true);
    }
    public void easy()
    {
        PlayerPrefs.SetInt("difficulty", 1);
        SceneManager.LoadScene("Game");
    }
    public void normal()
    {
        PlayerPrefs.SetInt("difficulty", 2);
        SceneManager.LoadScene("Game");
    }
    public void hard()
    {
        PlayerPrefs.SetInt("difficulty", 3);
        SceneManager.LoadScene("Game");
    }
    public void impossible()
    {
        PlayerPrefs.SetInt("difficulty", 4);
        SceneManager.LoadScene("Game");
    }

}
