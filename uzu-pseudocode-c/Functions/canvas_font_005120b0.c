// Function : canvas_font
// Namespace: 
// Entry    : 005120b0
// Prototype: undefined canvas_font(float param_1, float param_2, float param_3, long param_4, undefined * param_5, undefined8 param_6, char * param_7, char * param_8, undefined4 * param_9)
// Body     : 005120b0 - 005121be


void canvas_font(float param_1,float param_2,float param_3,long param_4,undefined *param_5,
                undefined8 param_6,char *param_7,char *param_8,undefined4 *param_9)

{
  undefined4 uVar1;
  uint uVar2;
  float fVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  undefined8 extraout_XMM1_Qa;
  undefined8 uVar6;
  undefined4 uVar8;
  undefined1 auVar7 [16];
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  undefined8 in_XMM6_Qa;
  undefined8 in_XMM7_Qa;
  undefined1 auVar14 [16];
  ulong local_28;
  
  auVar14 = canvas_getrootfor(param_4);
  puVar4 = auVar14._0_8_;
  uVar1 = *(undefined4 *)(puVar4 + 0xd0);
  fVar3 = DAT_005d9038;
  if (param_2 != 0.0) {
    if (param_2 <= DAT_005d98f4) {
      param_2 = DAT_005d98f4;
    }
    if (DAT_00654498 <= param_2) {
      param_2 = DAT_00654498;
    }
    fVar3 = (float)((double)param_2 * DAT_00651f48);
  }
  uVar13 = 0;
  uVar8 = 0;
  uVar10 = 0;
  uVar2 = ~-(uint)(DAT_005d9078 != param_3) & (uint)DAT_005d9038 |
          -(uint)(DAT_005d9078 != param_3) & (uint)fVar3;
  auVar7 = ZEXT416(uVar2);
  fVar9 = DAT_005d9038;
  fVar11 = fVar3;
  fVar12 = param_3;
  canvas_dofont(param_1,(ulong)(~-(uint)(DAT_0065449c != param_3) & (uint)DAT_005d9038 |
                               -(uint)(DAT_0065449c != param_3) & (uint)fVar3),(ulong)uVar2,
                (ulong)(uint)DAT_005d9038,(ulong)(uint)fVar3,(ulong)(uint)param_3,in_XMM6_Qa,
                in_XMM7_Qa,puVar4,param_5,auVar14._8_8_,param_7,param_8,param_9);
  uVar6 = extraout_XMM1_Qa;
  puVar5 = getbytes(0xc);
  *puVar5 = uVar1;
  local_28 = (ulong)(uint)fVar3;
  puVar5[1] = fVar3;
  puVar5[2] = (int)param_3;
  canvas_undo_add(local_28,uVar6,auVar7._0_8_,CONCAT44(uVar10,fVar9),CONCAT44(uVar8,fVar11),
                  CONCAT44(uVar13,fVar12),in_XMM6_Qa,in_XMM7_Qa,(long)puVar4,0xb,"font",puVar5,
                  param_8,param_9);
  *(int *)PTR_sys_defaultfont_00715900 = (int)param_1;
  return;
}


