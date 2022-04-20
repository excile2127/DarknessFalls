using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

// Not commented

public class BannerController : MonoBehaviour
{
    [SerializeField] public Image levelBanner;

    public float waitDuration;
    public float fadeDuration;

    void Reset()
    {
        waitDuration = 3.0f;
        fadeDuration = 1.0f;
    }

    void Start()
    {
        if (levelBanner != null)
        {
            StartCoroutine(FadeBannerCoroutine());
        }
    }

    private IEnumerator FadeBannerCoroutine()
    {
        yield return new WaitForSeconds(waitDuration);

        float startingAlpha = levelBanner.color.a;
        float interpolator = 0.0f;
        while (interpolator < 1.0f)
        {
            Color tempColor = levelBanner.color;
            tempColor.a = Mathf.Lerp(startingAlpha, 0.0f, interpolator);
            levelBanner.color = tempColor;

            interpolator += Time.deltaTime / fadeDuration;
            if (interpolator > 1.0f)
            {
                interpolator = 1.0f;
            }

            yield return null;
        }

        Color temp = levelBanner.color;
        temp.a = 0.0f;
        levelBanner.color = temp;
    }
}
