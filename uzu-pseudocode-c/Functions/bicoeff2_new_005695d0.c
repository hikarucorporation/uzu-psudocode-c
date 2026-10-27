// Function : bicoeff2_new
// Namespace: 
// Entry    : 005695d0
// Prototype: long * bicoeff2_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, ulong param_10, int * param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 005695d0 - 00569895


long * bicoeff2_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   undefined8 param_9,ulong param_10,int *param_11,undefined8 param_12,
                   char *param_13,undefined8 param_14)

{
  char *__s1;
  long lVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  ulong uVar7;
  int iVar8;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar9;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  uVar7 = param_10 & 0xffffffff;
  plVar4 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,bicoeff2_class,
                  param_10,param_11,param_12,param_13,param_14);
  if ((int)param_10 < 1) {
    iVar2 = 0;
    local_34 = DAT_005d9038;
    local_3c = 0;
    local_38 = 0;
  }
  else {
    local_34 = DAT_005d9038;
    local_38 = 0;
    iVar8 = 0;
    iVar2 = 0;
    local_3c = 0;
    do {
      iVar3 = *param_11;
      if (iVar3 == 2) {
        puVar5 = (undefined8 *)atom_getsymbolarg(0,(int)uVar7,(long)param_11);
        __s1 = (char *)*puVar5;
        iVar2 = strcmp(__s1,"allpass");
        if (iVar2 == 0) {
          iVar2 = 1;
        }
        else {
          iVar2 = strcmp(__s1,"bandpass");
          if (iVar2 == 0) {
            iVar2 = 2;
          }
          else {
            iVar2 = strcmp(__s1,"bandstop");
            if (iVar2 == 0) {
              iVar2 = 3;
            }
            else {
              iVar2 = strcmp(__s1,"eq");
              if (iVar2 == 0) {
                iVar2 = 4;
              }
              else {
                iVar2 = strcmp(__s1,"highpass");
                if (iVar2 == 0) {
                  iVar2 = 5;
                }
                else {
                  iVar2 = strcmp(__s1,"highshelf");
                  if (iVar2 == 0) {
                    iVar2 = 6;
                  }
                  else {
                    iVar2 = strcmp(__s1,"lowpass");
                    if (iVar2 == 0) {
                      iVar2 = 7;
                    }
                    else {
                      iVar2 = strcmp(__s1,"lowshelf");
                      if (iVar2 == 0) {
                        iVar2 = 8;
                      }
                      else {
                        iVar3 = strcmp(__s1,"resonant");
                        iVar2 = 9;
                        if (iVar3 != 0) {
                          pd_error(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,
                                   param_4,param_5,param_6,param_7,param_8,(long)plVar4,
                                   "[bicoeff2]: improper args",extraout_RDX,param_12,param_13,
                                   param_14);
                          return (long *)0x0;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        uVar7 = (ulong)((int)uVar7 - 1);
        iVar3 = param_11[4];
        param_11 = param_11 + 4;
      }
      if (iVar3 == 1) {
        uVar9 = atom_getfloatarg(0,(int)uVar7,(long)param_11);
        if (iVar8 == 2) {
          local_38 = uVar9;
        }
        else if (iVar8 == 1) {
          local_34 = uVar9;
        }
        else if (iVar8 == 0) {
          local_3c = uVar9;
        }
        iVar8 = iVar8 + 1;
        uVar7 = (ulong)((int)uVar7 - 1);
        param_11 = param_11 + 4;
      }
    } while (0 < (int)uVar7);
  }
  *(undefined4 *)(plVar4 + 6) = local_3c;
  *(undefined4 *)((long)plVar4 + 0x34) = local_34;
  *(undefined4 *)(plVar4 + 7) = local_38;
  *(float *)((long)plVar4 + 0x3c) = (float)iVar2;
  plVar6 = (long *)__tls_get_addr(&PTR_007159b0);
  lVar1 = *plVar6;
  puVar5 = gensym("qs");
  inlet_new(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,param_5,
            param_6,param_7,param_8,(long)plVar4,(long)plVar4,lVar1 + 0x78,(long)puVar5,param_13,
            param_14);
  lVar1 = *plVar6;
  puVar5 = gensym("gain");
  inlet_new(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),param_2,param_3,param_4,param_5,
            param_6,param_7,param_8,(long)plVar4,(long)plVar4,lVar1 + 0x78,(long)puVar5,param_13,
            param_14);
  outlet_new(CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02),param_2,param_3,param_4,param_5,
             param_6,param_7,param_8,(long)plVar4,*plVar6 + 0xc0,extraout_RDX_00,puVar5,param_13,
             param_14);
  return plVar4;
}


