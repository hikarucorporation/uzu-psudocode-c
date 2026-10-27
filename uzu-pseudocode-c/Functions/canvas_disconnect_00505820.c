// Function : canvas_disconnect
// Namespace: 
// Entry    : 00505820
// Prototype: undefined canvas_disconnect(float param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 00505820 - 0050595f


void canvas_disconnect(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                      long param_9)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 in_R9;
  float fVar5;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined8 uVar6;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 in_stack_fffffffffffffec8;
  long local_120;
  long local_118;
  int local_10c;
  long *local_108;
  int local_ec;
  char local_a8 [136];
  
  fVar9 = (float)param_4;
  fVar8 = (float)param_3;
  fVar7 = (float)param_2;
  uVar6 = linetraverser_start(&local_120,param_9);
  puVar4 = linetraverser_next(uVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                              &local_120);
  if (puVar4 != (undefined8 *)0x0) {
    do {
      iVar1 = canvas_getindex(param_9,local_118);
      iVar2 = canvas_getindex(param_9,(long)local_108);
      fVar5 = (float)iVar1;
      if ((((fVar5 == param_1) && (fVar5 = (float)local_10c, fVar5 == fVar7)) &&
          (fVar5 = (float)iVar2, fVar5 == fVar8)) && (fVar5 = (float)local_ec, fVar5 == fVar9)) {
        uVar3 = glist_isvisible(param_9);
        uVar6 = CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
        if ((uVar3 != 0) &&
           (uVar6 = CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),
           (*(byte *)(param_9 + 0xe8) & 1) != 0)) {
          sprintf(local_a8,"l%p",puVar4);
          uVar6 = pdgui_vmess(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,
                              param_4,param_5,param_6,param_7,param_8,0,"crs",param_9,"delete",
                              local_a8,in_R9,in_stack_fffffffffffffec8);
        }
        obj_disconnect(uVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8,local_118,
                       local_10c,local_108,local_ec);
        return;
      }
      puVar4 = linetraverser_next((ulong)(uint)fVar5,param_2,param_3,param_4,param_5,param_6,param_7
                                  ,param_8,&local_120);
    } while (puVar4 != (undefined8 *)0x0);
  }
  return;
}


