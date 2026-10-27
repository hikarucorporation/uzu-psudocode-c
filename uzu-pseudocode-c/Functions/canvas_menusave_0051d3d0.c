// Function : canvas_menusave
// Namespace: 
// Entry    : 0051d3d0
// Prototype: undefined canvas_menusave(float param_1, undefined8 param_2, double param_3, double param_4, double param_5, double param_6, double param_7, undefined8 param_8, long param_9, char * param_10, undefined8 param_11, undefined8 * param_12, uint * param_13, byte * param_14, undefined1 param_15)
// Body     : 0051d3d0 - 0051d4c4


void canvas_menusave(float param_1,undefined8 param_2,double param_3,double param_4,double param_5,
                    double param_6,double param_7,undefined8 param_8,long param_9,char *param_10,
                    undefined8 param_11,undefined8 *param_12,uint *param_13,byte *param_14,
                    undefined1 param_15)

{
  long *plVar1;
  char *__s1;
  int iVar2;
  long *plVar3;
  size_t sVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 uVar8;
  undefined8 extraout_RDX_02;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 uVar9;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 uVar10;
  undefined4 extraout_XMM0_Db_02;
  
  plVar3 = (long *)canvas_getrootfor(param_9);
  plVar1 = (long *)plVar3[0x19];
  __s1 = (char *)*plVar1;
  if (*__s1 != '\0') {
    param_10 = "PDUNTITLED";
    iVar2 = strncmp(__s1,"PDUNTITLED",10);
    if (iVar2 != 0) {
      sVar4 = strlen(__s1);
      uVar8 = extraout_RDX;
      uVar9 = extraout_XMM0_Da;
      uVar10 = extraout_XMM0_Db;
      if (3 < sVar4) {
        param_10 = ".pat";
        iVar2 = strcmp(__s1 + (sVar4 - 4),".pat");
        uVar8 = extraout_RDX_00;
        uVar9 = extraout_XMM0_Da_00;
        uVar10 = extraout_XMM0_Db_00;
        if (iVar2 == 0) {
          param_10 = ".mxt";
          iVar2 = strcmp(__s1 + (sVar4 - 4),".mxt");
          uVar8 = extraout_RDX_01;
          uVar9 = extraout_XMM0_Da_01;
          uVar10 = extraout_XMM0_Db_01;
          if (iVar2 == 0) goto LAB_0051d46e;
        }
      }
      plVar5 = (long *)canvas_getdir(CONCAT44(uVar10,uVar9),param_2,param_3,param_4,param_5,param_6,
                                     param_7,param_8,(long)plVar3,param_10,uVar8,param_12,
                                     (char *)param_13,param_14);
      canvas_savetofile(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar3,
                        plVar1,plVar5,param_12,param_13,param_14);
      return;
    }
  }
LAB_0051d46e:
  lVar6 = canvas_getrootfor((long)plVar3);
  uVar8 = **(undefined8 **)(lVar6 + 200);
  puVar7 = (undefined8 *)
           canvas_getdir(CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02),param_2,param_3,param_4,
                         param_5,param_6,param_7,param_8,lVar6,param_10,extraout_RDX_02,param_12,
                         (char *)param_13,param_14);
  pdgui_vmess(0,(ulong)(uint)param_1,param_3,param_4,param_5,param_6,param_7,param_8,0x655214,
              "^ ss i",lVar6,uVar8,*puVar7,(ulong)(param_1 != 0.0),param_15);
  return;
}


