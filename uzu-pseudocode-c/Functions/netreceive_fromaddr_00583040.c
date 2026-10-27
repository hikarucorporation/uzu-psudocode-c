// Function : netreceive_fromaddr
// Namespace: 
// Entry    : 00583040
// Prototype: undefined netreceive_fromaddr(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, ushort * param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00583040 - 005830bc


void netreceive_fromaddr(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                        ,undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8
                        ,long param_9,ushort *param_10,undefined8 param_11,undefined8 param_12,
                        char *param_13,undefined8 param_14)

{
  long *plVar1;
  ushort uVar2;
  char *pcVar3;
  undefined4 extraout_XMM0_Db;
  undefined4 local_68 [2];
  undefined8 *local_60;
  undefined4 local_58;
  float local_50;
  char local_48 [48];
  
  plVar1 = *(long **)(param_9 + 0x40);
  if (plVar1 != (long *)0x0) {
    uVar2 = sockaddr_get_port(param_10);
    pcVar3 = sockaddr_get_addrstr((short *)param_10,local_48,0x2e);
    if (pcVar3 != (char *)0x0) {
      local_68[0] = 2;
      local_60 = gensym(local_48);
      local_58 = 1;
      local_50 = (float)uVar2;
      outlet_list(CONCAT44(extraout_XMM0_Db,local_50),param_2,param_3,param_4,param_5,param_6,
                  param_7,param_8,plVar1,0,2,local_68,param_13,param_14);
    }
  }
  return;
}


