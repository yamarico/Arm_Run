using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Valve.VR.InteractionSystem;
using System;

public class Swing_left : MonoBehaviour
{
    private Vector3 _prevPosition;
    //public Vector3 velocity;
    public GameObject player_left;
    //public GameObject RightHand_instance;
    public VelocityEstimator VE_l;

    public object self;

    Rigidbody body;
    void Start()
    {
        //VE = GetComponent<VelocityEstimator>();
        //    //player = transform.root.gameObject;
        //    //body = player.GetComponent<Rigidbody>();
        //}
    }
    void Update()
    {

        //var x_position = transform.position.x;
        //var y_position = transform.position.y;
        //var z_position = transform.position.z;
        var y_rotation = transform.eulerAngles.y * Mathf.Deg2Rad;
        //Debug.Log(y_rotation);
        //Debug.Log("Sin:" + Mathf.Sin(y_rotation));
        //Debug.Log("Cos:" + Mathf.Cos(y_rotation));
        double xy_velocity;
        double box;


        ////bool acceleration_swich = false;

        //// Œ»Ý‘¬“xŒvŽZ

        //Vector3 velocity = VE.GetVelocityEstimate() - body.velocity;
        //Vector3 acceleration = VE.GetAccelerationEstimate();
        //Debug.Log(velocity.y);
        ////if (velocity.y > 2)
        ////{
        ////    speed_var = 50;
        ////}
        ////else if (velocity.y <= 2)//&& (acceleration_swich == false))
        ////{
        ////    speed_var = Math.Max(0, speed_var - 0.3);
        ////    if (speed_var == 0)
        ////        if (velocity.y > 0.5)
        ////        {
        ////            speed_var = 15;
        ////        }
        ////        else
        ////        {
        ////            speed_var = 0;
        ////        }
        ////}
        ////this.body.velocity = new Vector3(Mathf.Sin(y_rotation) * (float)speed_var, 0, Mathf.Cos(y_rotation) * (float)speed_var);

    }

}
