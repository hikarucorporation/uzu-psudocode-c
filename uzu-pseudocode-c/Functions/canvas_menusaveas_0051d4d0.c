// Function : canvas_menusaveas
// Namespace: 
// Entry    : 0051d4d0
// Prototype: undefined canvas_menusaveas(float param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14, undefined1 param_15)
// Body     : 0051d4d0 - 0051d52b


void canvas_menusaveas(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                      long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                      char *param_13,undefined8 param_14,undefined1 param_15)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 extraout_RDX;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  
  lVar2 = canvas_getrootfor(param_9);
  uVar1 = **(undefined8 **)(lVar2 + 200);
  puVar3 = (undefined8 *)
           canvas_getdir(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5
                         ,param_6,param_7,param_8,lVar2,param_10,extraout_RDX,param_12,param_13,
                         param_14);
  pdgui_vmess(0,(ulong)(uint)param_1,param_3,param_4,param_5,param_6,param_7,param_8,0x655214,
              "^ ss i",lVar2,uVar1,*puVar3,(ulong)(param_1 != 0.0),param_15);
  return;
}


