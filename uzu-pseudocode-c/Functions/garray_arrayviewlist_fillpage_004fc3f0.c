// Function : garray_arrayviewlist_fillpage
// Namespace: 
// Entry    : 004fc3f0
// Prototype: undefined garray_arrayviewlist_fillpage(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, int * param_12, char * param_13, undefined8 param_14, undefined1 param_15)
// Body     : 004fc3f0 - 004fc52e


void garray_arrayviewlist_fillpage
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9,undefined8 param_10,undefined8 param_11,int *param_12,char *param_13,
               undefined8 param_14,undefined1 param_15)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  undefined1 in_stack_ffffffffffffffb8;
  int local_3c;
  float local_38;
  float local_34;
  long local_30;
  
  local_34 = (float)param_2;
  local_38 = (float)param_1;
  local_3c = 0;
  local_30 = 0;
  uVar4 = garray_getfloatwords
                    (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                     &local_3c,&local_30,param_12,param_13,param_14);
  iVar3 = local_3c;
  if ((int)uVar4 == 0) {
    pd_error(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6,
             param_7,param_8,param_9,"error in %s()","garray_arrayviewlist_fillpage",param_12,
             param_13,param_14);
    return;
  }
  uVar9 = (uint)local_34;
  iVar1 = local_3c + -1 >> 0x1f;
  iVar2 = -iVar1;
  iVar1 = (local_3c + -1) / 1000 + iVar1;
  uVar5 = iVar1 + iVar2;
  uVar6 = (int)local_38;
  if ((int)uVar5 < (int)local_38) {
    uVar6 = uVar5;
  }
  if ((int)uVar6 < 0) {
    uVar6 = 0;
  }
  uVar4 = pdgui_vmess(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                      param_6,param_7,param_8,0x653d79,"s iii",**(undefined8 **)(param_9 + 0x28),
                      (ulong)uVar6,(ulong)(iVar1 + iVar2 + 1),1000,in_stack_ffffffffffffffb8);
  uVar5 = uVar6 * 1000;
  uVar7 = (ulong)(iVar3 + uVar6 * -1000);
  if ((int)(uVar5 + 1000) <= iVar3) {
    uVar7 = 1000;
  }
  lVar8 = (ulong)uVar5 * 8 + local_30;
  uVar4 = pdgui_vmess(uVar4,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0x653da0,"siw",
                      **(undefined8 **)(param_9 + 0x28),(ulong)uVar5,uVar7,lVar8,
                      in_stack_ffffffffffffffb8);
  pdgui_vmess(uVar4,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0x653dc5,"si",
              **(undefined8 **)(param_9 + 0x28),(ulong)uVar9,uVar7,lVar8,param_15);
  return;
}


