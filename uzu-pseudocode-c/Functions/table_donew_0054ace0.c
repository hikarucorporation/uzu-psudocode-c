// Function : table_donew
// Namespace: 
// Entry    : 0054ace0
// Prototype: long * table_donew(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 * param_9, uint param_10, int param_11, int param_12, undefined8 param_13, undefined8 param_14)
// Body     : 0054ace0 - 0054aed6


long * table_donew(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  double param_5,double param_6,double param_7,undefined8 param_8,
                  undefined8 *param_9,uint param_10,int param_11,int param_12,undefined8 **param_13,
                  undefined4 *param_14)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 extraout_RDX;
  undefined8 **ppuVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  undefined4 uVar14;
  uint uVar15;
  undefined4 uVar16;
  uint uVar17;
  undefined4 uVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  undefined4 uVar22;
  uint uVar23;
  undefined4 uVar24;
  undefined1 auVar25 [16];
  undefined1 in_stack_fffffffffffffea8;
  char local_138 [8];
  undefined4 local_130;
  undefined4 local_128;
  undefined4 local_120;
  undefined4 local_118;
  float local_110;
  undefined4 local_108;
  float local_100;
  undefined4 local_f8;
  undefined8 *local_f0;
  undefined4 local_e8;
  undefined4 local_e0;
  
  ppuVar8 = param_13;
  puVar9 = param_14;
  lVar1 = canvas_getcurrent(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  plVar2 = (long *)__tls_get_addr();
  if ((undefined8 *)(*plVar2 + 0x168) == param_9) {
    puVar3 = gensym("table");
    tabcount = tabcount + 1;
    sprintf(local_138,"%s%d",*puVar3);
    param_9 = gensym(local_138);
  }
  uVar10 = 100;
  if (0 < (int)param_10) {
    uVar10 = param_10;
  }
  local_138[0] = '\x01';
  local_138[1] = '\0';
  local_138[2] = '\0';
  local_138[3] = '\0';
  local_130 = 0;
  local_128 = 1;
  local_120 = 0x42480000;
  local_110 = (float)((int)param_13 + 100);
  local_118 = 1;
  local_108 = 1;
  local_100 = (float)((int)param_14 + 100);
  local_f8 = 2;
  local_e8 = 1;
  local_e0 = 0;
  local_f0 = param_9;
  plVar2 = canvas_new((ulong)(uint)local_100,param_2,param_3,param_4,param_5,param_6,param_7,param_8
                      ,0,0,6,(long)local_138,(uint *)ppuVar8,puVar9);
  plVar2[9] = lVar1;
  auVar25 = __tls_get_addr(&PTR_007159b0);
  plVar4 = auVar25._0_8_;
  uVar7 = 1;
  if (1 < uVar10) {
    uVar7 = (ulong)(uVar10 - 1);
  }
  uVar14 = 0;
  fVar13 = (float)(int)uVar7;
  uVar20 = 0;
  fVar19 = (float)((int)param_14 + 0x32);
  uVar22 = 0;
  fVar21 = (float)((int)param_13 + 0x32);
  uVar16 = 0;
  uVar18 = 0;
  uVar24 = 0;
  uVar15 = DAT_005d9038;
  uVar17 = DAT_005d94c0;
  uVar23 = DAT_005d94c0;
  plVar5 = glist_addglist(0,(ulong)DAT_005d9054,(ulong)(uint)fVar13,(ulong)DAT_005d9038,
                          (ulong)DAT_005d94c0,(ulong)(uint)fVar19,(ulong)(uint)fVar21,
                          (ulong)DAT_005d94c0,plVar2,(undefined8 *)(*plVar4 + 0x168),auVar25._8_8_,
                          uVar7,(uint *)ppuVar8,puVar9);
  uVar6 = param_11 + param_12 * 8;
  uVar7 = (ulong)uVar6;
  uVar12 = 0;
  fVar11 = (float)(int)uVar6;
  graph_array((float)(int)uVar10,(ulong)(uint)fVar11,CONCAT44(uVar14,fVar13),CONCAT44(uVar16,uVar15)
              ,(double)CONCAT44(uVar18,uVar17),(double)CONCAT44(uVar20,fVar19),
              (double)CONCAT44(uVar22,fVar21),CONCAT44(uVar24,uVar23),plVar5,param_9,
              (undefined8 *)(*plVar4 + 0x78),uVar7,ppuVar8,(ulong)puVar9);
  *(long **)(*plVar4 + 0x58) = plVar2;
  pd_popsym(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),CONCAT44(uVar12,fVar11),
            CONCAT44(uVar14,fVar13),CONCAT44(uVar16,uVar15),CONCAT44(uVar18,uVar17),
            CONCAT44(uVar20,fVar19),CONCAT44(uVar22,fVar21),CONCAT44(uVar24,uVar23),(long)plVar2,
            param_9,extraout_RDX,uVar7,(char *)ppuVar8,puVar9,in_stack_fffffffffffffea8);
  *(byte *)(plVar2 + 0x1d) = *(byte *)(plVar2 + 0x1d) & 0xf7;
  return plVar2;
}


