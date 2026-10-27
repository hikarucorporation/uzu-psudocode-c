// Function : glist_arraydialog
// Namespace: 
// Entry    : 004fa0f0
// Prototype: undefined glist_arraydialog(float param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, char * param_10, undefined8 param_11, undefined8 param_12, undefined8 * * param_13, undefined4 * param_14)
// Body     : 004fa0f0 - 004fa1bb


void glist_arraydialog(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      double param_5,double param_6,double param_7,undefined8 param_8,long *param_9,
                      char *param_10,undefined8 param_11,undefined8 param_12,undefined8 **param_13,
                      undefined4 *param_14)

{
  long *plVar1;
  long *plVar2;
  undefined8 extraout_RDX;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 auVar16 [16];
  
  if (param_1 <= DAT_005d9038) {
    param_1 = DAT_005d9038;
  }
  if ((float)param_3 != 0.0) {
    plVar1 = glist_findgraph((long)param_9);
    if (plVar1 != (long *)0x0) goto LAB_004fa172;
  }
  auVar16 = __tls_get_addr(&PTR_007159b0);
  uVar7 = 0;
  uVar8 = 0;
  uVar9 = 0;
  uVar10 = 0;
  uVar11 = 0;
  uVar12 = 0;
  uVar13 = 0;
  uVar14 = 0;
  uVar15 = 0;
  uVar5 = 0;
  fVar3 = param_1;
  uVar6 = DAT_005d9054;
  plVar1 = glist_addglist(0,(ulong)(uint)DAT_005d9038,(ulong)(uint)param_1,(ulong)DAT_005d9054,0,0,0
                          ,0,param_9,(undefined8 *)(*auVar16._0_8_ + 0x168),auVar16._8_8_,param_12,
                          (uint *)param_13,param_14);
  param_8 = CONCAT44(uVar15,uVar14);
  param_7 = (double)CONCAT44(uVar13,uVar12);
  param_6 = (double)CONCAT44(uVar11,uVar10);
  param_5 = (double)CONCAT44(uVar9,uVar8);
  param_4 = CONCAT44(uVar7,uVar6);
  param_3 = CONCAT44(uVar5,fVar3);
LAB_004fa172:
  plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
  fVar3 = (float)(int)(float)param_2;
  fVar4 = (float)(int)(float)((ulong)param_2 >> 0x20);
  graph_array(param_1,CONCAT44(fVar4,fVar3),param_3,param_4,param_5,param_6,param_7,param_8,plVar1,
              (undefined8 *)param_10,(undefined8 *)(*plVar2 + 0x78),param_12,param_13,
              (ulong)param_14);
  canvas_dirty(DAT_005d9038,CONCAT44(fVar4,fVar3),param_3,param_4,param_5,param_6,param_7,param_8,
               (long)param_9,param_10,extraout_RDX,param_12,(char *)param_13,param_14);
  return;
}


