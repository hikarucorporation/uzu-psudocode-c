// Function : garray_arrayviewlist_new
// Namespace: 
// Entry    : 004fc370
// Prototype: undefined garray_arrayviewlist_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, int * param_12, char * param_13, undefined8 param_14, undefined1 param_15)
// Body     : 004fc370 - 004fc3e0


void garray_arrayviewlist_new
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9,undefined8 param_10,undefined8 param_11,int *param_12,char *param_13,
               undefined8 param_14,undefined1 param_15)

{
  undefined8 uVar1;
  int *piVar2;
  undefined8 extraout_RDX;
  char *pcVar3;
  char *pcVar4;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  undefined1 in_stack_ffffffffffffffe8;
  undefined4 local_14;
  undefined8 local_10;
  
  uVar1 = garray_getfloatwords
                    (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                     &local_14,&local_10,param_12,param_13,param_14);
  if ((int)uVar1 == 0) {
    pd_error(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6,
             param_7,param_8,param_9,"error in %s()","garray_arrayviewlist_new",param_12,param_13,
             param_14);
    return;
  }
  *(byte *)(param_9 + 0x30) = *(byte *)(param_9 + 0x30) | 8;
  pcVar4 = (char *)**(undefined8 **)(param_9 + 0x28);
  pcVar3 = "pdtk_array_listview_new";
  piVar2 = (int *)&DAT_006546ed;
  uVar1 = 0;
  pdgui_stub_vnew(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                  param_6,param_7,param_8,param_9,"pdtk_array_listview_new",(char *)param_9,"si",
                  pcVar4,0,in_stack_ffffffffffffffe8);
  garray_arrayviewlist_fillpage
            (0,0,param_3,param_4,param_5,param_6,param_7,param_8,param_9,pcVar3,extraout_RDX,piVar2,
             pcVar4,uVar1,param_15);
  return;
}


