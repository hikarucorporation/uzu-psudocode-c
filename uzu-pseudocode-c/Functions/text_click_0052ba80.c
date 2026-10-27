// Function : text_click
// Namespace: 
// Entry    : 0052ba80
// Prototype: undefined8 text_click(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, char * param_14, undefined8 param_15, int param_16)
// Body     : 0052ba80 - 0052bb42


undefined8
text_click(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,long *param_9,
          undefined8 param_10,undefined8 param_11,undefined8 param_12,char *param_13,char *param_14,
          undefined8 param_15,int param_16)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  
  iVar3 = (int)param_14;
  iVar2 = (int)param_13;
  iVar1 = (int)param_12;
  bVar4 = *(byte *)((long)param_9 + 0x2e) & 3;
  if (bVar4 == 2) {
    uVar7 = 1;
    if (param_16 != 0) {
      message_click(CONCAT44((int)((ulong)param_1 >> 0x20),(float)(int)param_11),
                    CONCAT44((int)((ulong)param_2 >> 0x20),(float)iVar1),
                    CONCAT44((int)((ulong)param_3 >> 0x20),(float)iVar2),0,
                    CONCAT44((int)((ulong)param_5 >> 0x20),(float)iVar3),param_6,param_7,param_8,
                    (long)param_9,param_10,param_11,param_12,param_13,param_14);
    }
  }
  else {
    uVar7 = 0;
    if (bVar4 == 1) {
      puVar5 = gensym("click");
      lVar6 = zgetfn(param_9,(long)puVar5);
      if ((lVar6 != 0) && (uVar7 = 1, param_16 != 0)) {
        pd_vmess((double)(int)param_11,(double)iVar1,(double)iVar2,0,(double)iVar3,param_6,param_7,
                 param_8,(long)param_9,puVar5,0x655b78,param_12,param_13,param_14,(double)puVar5);
      }
    }
  }
  return uVar7;
}


