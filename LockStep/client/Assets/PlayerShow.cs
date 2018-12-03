﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using IDG;
using IDG.FightClient;
public class PlayerShow : NetObjectShow<PlayerData> {
    // public NetInfo net;
    public int clientId = -1;
    static int playerUnitId = 1;
    public NetObjectShow<PlayerData> netPrefab;
    public Animator anim;
    private new void Start()
    {
        base.Start();
        data.ClientId = clientId;
        anim.SetInteger("WeaponType", 1);
    }

    //float last;



    // Use this for initialization


    // Update is called once per frame
    //void Update () {

    //}
    protected override void MoveSpeed(float speed)
    {
        anim.SetFloat("Speed", speed);
    }
}
public abstract class HealthData : NetData
{
    protected Ratio _m_Hp=new Ratio(100);
    protected bool isDead=false;
    public virtual void GetHurt(Ratio atk)
    {
        if (!isDead)
        {
            _m_Hp -= atk;
            Debug.Log(this.name + " GetHurt "+atk+" Hp:"+_m_Hp);
            if (_m_Hp <= 0)
            {
                Die();
            }
        }
        
    }
    protected virtual void Die()
    {
        isDead = true;
        Debug.Log(this.name + "dead!!!");
    }
}
public class PlayerData: HealthData
{
    protected GunBase gun;
    public override void Start()
    {
        this.tag = "Player";
        gun = new GunBase();
        gun.Init(20,this);
    }
    protected override void FrameUpdate()
    {
        
        V2 move = Input.GetJoyStickDirection(FrameKey.MoveKey);

        Position += move * deltaTime;
        if (move.x != 0 || move.y != 0)
        {
            Rotation = move.ToRotation();
        }
        if (Input.GetKey(FrameKey.Attack))
        {
            gun.Fire(Position + forward, Rotation);
            //ClientShowManager.Instance.Instantiate<Bullet>(NetDataType.bullet, Position + forward, Rotation);
            //Instantiate(netPrefab,Position + forward, Rotation);
            //Instantiate(netPrefab.gameObject, transform.position + transform.forward,net.Rotation.ToUnityRotation());
        }
       // Debug.Log("FrameUpdate"+ Position+":"+ Input.GetJoyStickDirection(FrameKey.MoveKey));
    }

    protected override string PrefabPath()
    {
        return "Prefabs/Player";
    }
}

