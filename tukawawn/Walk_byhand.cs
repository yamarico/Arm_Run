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

        //���x�̏���
        // deltaTime��0�̏ꍇ�͉������Ȃ�
        if (Mathf.Approximately(Time.deltaTime, 0))
            return;

        // ���݈ʒu�擾
        var position = transform.position;

        // ���ݑ��x�v�Z
        var velocity = (position - _prevPosition) / Time.deltaTime;

        // ���ݑ��x�����O�o��
        print($"velocity = {velocity}");

        // �O�t���[���ʒu���X�V
        _prevPosition = position;
        if (pry_hand > 3)
        {
            Vector3 pos = this.gameObject.transform.position;
            //this.gameObject.transform.position = new Vector3(pos.x + 1, pos.y, pos.z);
        }
    }

}
