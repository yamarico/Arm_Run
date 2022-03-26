using UnityEngine;

public class Walk_byhand : MonoBehaviour
{
    private Vector3 _prevPosition;
    public GameObject RightHand;
    public GameObject LeftHand;
    float pry_hand;
    float ply_hand;

    void Update()
    {
        //Transform r_hand = RightHand.transform;
        //Transform l_hand = LeftHand.transform;
        //pry_hand = r_hand.transform.position.y;
        //ply_hand = l_hand.transform.position.y;
        //Debug.Log("pry" + pry_hand);
        //Debug.Log("ply" + ply_hand);

        //速度の処理
        // deltaTimeが0の場合は何もしない
        if (Mathf.Approximately(Time.deltaTime, 0))
            return;

        // 現在位置取得
        var position = transform.position;

        // 現在速度計算
        var velocity = (position - _prevPosition) / Time.deltaTime;

        // 現在速度をログ出力
        print($"velocity = {velocity}");

        // 前フレーム位置を更新
        _prevPosition = position;
        if (pry_hand > 3)
        {
            Vector3 pos = this.gameObject.transform.position;
            //this.gameObject.transform.position = new Vector3(pos.x + 1, pos.y, pos.z);
        }
    }

}
