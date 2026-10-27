// Function : netsend_send
// Namespace: 
// Entry    : 00581c80
// Prototype: undefined netsend_send(undefined8 param_1, undefined8 param_2, double param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, double param_9, undefined8 param_10, uint param_11, undefined8 * param_12, sockaddr * param_13, undefined8 param_14)
// Body     : 00581c80 - 00581d17


void netsend_send(undefined8 param_1,undefined8 param_2,double param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 double param_9,undefined8 param_10,uint param_11,undefined8 *param_12,
                 sockaddr *param_13,undefined8 param_14)

{
  int iVar1;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  
  if (-1 < *(int *)((long)param_9 + 0x48)) {
    iVar1 = netsend_dosend(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                           *(int *)((long)param_9 + 0x48),param_11,param_12,param_13,param_14);
    if ((iVar1 != 0) && (-1 < *(int *)((long)param_9 + 0x48))) {
      sys_rmpollfn(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                   param_6,param_7,param_8,*(int *)((long)param_9 + 0x48));
      sys_closesocket(*(int *)((long)param_9 + 0x48));
      *(undefined4 *)((long)param_9 + 0x48) = 0xffffffff;
      if (*(undefined8 **)((long)param_9 + 0x58) != (undefined8 *)0x0) {
        socketreceiver_free(*(undefined8 **)((long)param_9 + 0x58));
      }
      *(undefined8 *)((long)param_9 + 200) = 0;
      *(undefined8 *)((long)param_9 + 0xd0) = 0;
      *(undefined8 *)((long)param_9 + 0xb8) = 0;
      *(undefined8 *)((long)param_9 + 0xc0) = 0;
      *(undefined8 *)((long)param_9 + 0xa8) = 0;
      *(undefined8 *)((long)param_9 + 0xb0) = 0;
      *(undefined8 *)((long)param_9 + 0x98) = 0;
      *(undefined8 *)((long)param_9 + 0xa0) = 0;
      *(undefined8 *)((long)param_9 + 0x88) = 0;
      *(undefined8 *)((long)param_9 + 0x90) = 0;
      *(undefined8 *)((long)param_9 + 0x78) = 0;
      *(undefined8 *)((long)param_9 + 0x80) = 0;
      *(undefined8 *)((long)param_9 + 0x68) = 0;
      *(undefined8 *)((long)param_9 + 0x70) = 0;
      *(undefined8 *)((long)param_9 + 0x58) = 0;
      *(undefined8 *)((long)param_9 + 0x60) = 0;
      *(undefined8 *)((long)param_9 + 0xd8) = 0;
      outlet_float(0,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                   *(long **)((long)param_9 + 0x18));
      return;
    }
  }
  return;
}


