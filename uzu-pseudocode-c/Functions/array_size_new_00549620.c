// Function : array_size_new
// Namespace: 
// Entry    : 00549620
// Prototype: long * array_size_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, ulong param_10, int * param_11, long * param_12, char * param_13, undefined8 param_14)
// Body     : 00549620 - 005497ed


long * array_size_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                     undefined8 param_9,ulong param_10,int *param_11,long *param_12,char *param_13,
                     undefined8 param_14)

{
  char *__s1;
  int iVar1;
  long *plVar2;
  long extraout_RAX;
  long *plVar3;
  long *plVar4;
  undefined8 extraout_RDX;
  undefined8 uVar5;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined8 extraout_RDX_04;
  undefined8 extraout_RDX_05;
  undefined8 extraout_RDX_06;
  undefined8 extraout_RDX_07;
  undefined8 extraout_RDX_08;
  uint uVar6;
  ulong uVar7;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined8 uVar8;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  
  uVar7 = param_10 & 0xffffffff;
  plVar2 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,array_size_class,
                  param_10,param_11,param_12,param_13,param_14);
  plVar3 = plVar2 + 6;
  plVar2[6] = 0;
  plVar2[10] = 0;
  plVar2[0xb] = 0;
  uVar8 = gpointer_init(plVar2 + 7);
  uVar5 = extraout_RDX;
  if ((int)param_10 != 0) {
    plVar4 = plVar2 + 10;
LAB_00549690:
    do {
      uVar6 = (uint)uVar7;
      if (*param_11 != 2) {
LAB_0054977e:
        uVar8 = post(uVar8,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                     "warning: array setline ignoring extra argument: ");
        uVar8 = postatom(uVar8,param_2,param_3,param_4,param_5,param_6,param_7,param_8,uVar6,
                         param_11,extraout_RDX_06,param_12,param_13,param_14);
        uVar8 = endpost(uVar8,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
        uVar5 = extraout_RDX_07;
        break;
      }
      __s1 = (char *)**(undefined8 **)(param_11 + 2);
      if (*__s1 != '-') {
        if (*plVar4 == 0) {
          *plVar3 = (long)*(undefined8 **)(param_11 + 2);
          param_12 = plVar3;
        }
        else {
          uVar8 = pd_error(uVar8,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                           (long)plVar2,"array setline: extra names after -s..",uVar5,plVar4,
                           param_13,param_14);
          uVar8 = postatom(uVar8,param_2,param_3,param_4,param_5,param_6,param_7,param_8,uVar6,
                           param_11,extraout_RDX_04,plVar4,param_13,param_14);
          uVar8 = endpost(uVar8,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
          param_12 = plVar4;
          uVar5 = extraout_RDX_05;
        }
        if (uVar6 != 1) {
          uVar6 = uVar6 - 1;
          param_11 = param_11 + 4;
          goto LAB_0054977e;
        }
        break;
      }
      iVar1 = strcmp(__s1,"-s");
      if ((((iVar1 == 0) && (2 < (int)uVar6)) && (param_11[4] == 2)) && (param_11[8] == 2)) {
        uVar8 = canvas_makebindsym(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,
                                   param_4,param_5,param_6,param_7,param_8,
                                   *(undefined8 **)(param_11 + 6));
        plVar2[10] = extraout_RAX;
        plVar2[0xb] = *(long *)(param_11 + 10);
        param_11 = param_11 + 0xc;
        uVar7 = (ulong)(uVar6 - 3);
        uVar5 = extraout_RDX_01;
        if (uVar6 - 3 == 0) break;
        goto LAB_00549690;
      }
      uVar8 = pd_error(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                       param_6,param_7,param_8,(long)plVar2,"array setline: unknown flag ...",
                       extraout_RDX_00,param_12,param_13,param_14);
      uVar8 = postatom(uVar8,param_2,param_3,param_4,param_5,param_6,param_7,param_8,uVar6,param_11,
                       extraout_RDX_02,param_12,param_13,param_14);
      uVar8 = endpost(uVar8,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      param_11 = param_11 + 4;
      uVar7 = (ulong)(uVar6 - 1);
      uVar5 = extraout_RDX_03;
    } while (uVar6 - 1 != 0);
  }
  if (plVar2[10] == 0) {
    symbolinlet_new(uVar8,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)plVar2,
                    (long)plVar3,uVar5,param_12,param_13,param_14);
  }
  else {
    pointerinlet_new(uVar8,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)plVar2,
                     (long)(plVar2 + 7),uVar5,param_12,param_13,param_14);
  }
  plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
  outlet_new(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,param_5,
             param_6,param_7,param_8,(long)plVar2,*plVar3 + 0x78,extraout_RDX_08,param_12,param_13,
             param_14);
  return plVar2;
}


