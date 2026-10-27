// Function : canvas_properties
// Namespace: 
// Entry    : 0050ba30
// Prototype: undefined canvas_properties(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0050ba30 - 0050bb34


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void canvas_properties(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                      long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                      char *param_13,undefined8 param_14)

{
  undefined *puVar1;
  byte bVar2;
  undefined7 extraout_var;
  long lVar3;
  char *pcVar4;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 uVar5;
  undefined8 extraout_RDX_02;
  long *plVar6;
  char *pcVar7;
  char *pcVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  double dVar12;
  undefined8 uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  
  bVar2 = glist_isgraph(param_9);
  pcVar8 = (char *)(CONCAT71(extraout_var,bVar2) & 0xffffffff);
  if ((int)CONCAT71(extraout_var,bVar2) == 0) {
    fVar10 = glist_dpixtodx(DAT_005d9038,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                            param_9,param_10,extraout_RDX,param_12,param_13,param_14);
    fVar11 = glist_dpixtody(DAT_005d9038,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                            param_9,param_10,extraout_RDX_00,param_12,param_13,param_14);
    dVar12 = (double)fVar10;
    dVar14 = (double)(float)((uint)fVar11 ^ _DAT_006524b0);
    dVar15 = 0.0;
    dVar16 = DAT_00651e70;
    dVar17 = _DAT_00651e80;
    dVar18 = _UNK_00651e88;
  }
  else {
    dVar15 = (double)(float)*(undefined8 *)(param_9 + 0x58);
    dVar12 = 0.0;
    dVar14 = 0.0;
    dVar16 = (double)(float)((ulong)*(undefined8 *)(param_9 + 0x58) >> 0x20);
    dVar17 = (double)(float)*(undefined8 *)(param_9 + 0x60);
    dVar18 = (double)(float)((ulong)*(undefined8 *)(param_9 + 0x60) >> 0x20);
  }
  uVar9 = (ulong)*(uint *)(param_9 + 0x50);
  pcVar7 = "pdtk_canvas_dialog";
  pcVar4 = "ff i ffff ii ii";
  uVar13 = pdgui_stub_vnew(dVar12,dVar14,dVar15,dVar16,dVar17,dVar18,param_7,param_8,param_9,
                           "pdtk_canvas_dialog",(char *)param_9,"ff i ffff ii ii",pcVar8,uVar9,
                           (char)*(undefined4 *)(param_9 + 0x54));
  puVar1 = PTR_garray_class_00715780;
  plVar6 = *(long **)(param_9 + 0x30);
  if (plVar6 != (long *)0x0) {
    lVar3 = *(long *)PTR_garray_class_00715780;
    uVar5 = extraout_RDX_01;
    do {
      if (*plVar6 == lVar3) {
        uVar13 = garray_properties(uVar13,dVar14,dVar15,dVar16,dVar17,dVar18,param_7,param_8,
                                   (long)plVar6,pcVar7,uVar5,(int *)pcVar4,pcVar8,uVar9);
        lVar3 = *(long *)puVar1;
        uVar5 = extraout_RDX_02;
      }
      plVar6 = (long *)plVar6[1];
    } while (plVar6 != (long *)0x0);
  }
  return;
}


