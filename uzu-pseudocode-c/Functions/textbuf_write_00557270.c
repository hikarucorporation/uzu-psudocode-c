// Function : textbuf_write
// Namespace: 
// Entry    : 00557270
// Prototype: undefined textbuf_write(undefined8 param_1, undefined8 param_2, double param_3, double param_4, double param_5, double param_6, double param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, int * param_12, char * param_13, undefined8 * param_14)
// Body     : 00557270 - 005573ac


void textbuf_write(undefined8 param_1,undefined8 param_2,double param_3,double param_4,
                  double param_5,double param_6,double param_7,undefined8 param_8,long param_9,
                  undefined8 param_10,undefined8 param_11,int *param_12,char *param_13,
                  undefined8 *param_14)

{
  undefined8 *puVar1;
  int iVar2;
  ulong uVar3;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  uint uVar4;
  int *piVar5;
  char *__s1;
  bool bVar6;
  undefined8 uVar7;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  uint local_41c;
  char local_418 [1000];
  
  if ((int)param_11 != 0) {
    uVar4 = (int)param_11 - 1;
    local_41c = 0;
    piVar5 = param_12;
    do {
      while( true ) {
        if (*piVar5 != 2) goto LAB_0055730c;
        puVar1 = *(undefined8 **)(piVar5 + 2);
        __s1 = (char *)*puVar1;
        if (*__s1 != '-') {
          if (uVar4 != 0) {
            uVar7 = post(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                         "warning: text define ignoring extra argument: ");
            uVar7 = postatom(uVar7,param_2,param_3,param_4,param_5,param_6,param_7,param_8,uVar4,
                             piVar5 + 4,extraout_RDX_02,param_12,param_13,param_14);
            param_1 = endpost(uVar7,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
            __s1 = (char *)*puVar1;
          }
          uVar7 = canvas_makefilename(param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                                      param_8,*(long *)(param_9 + 0x38),__s1,local_418,1000,param_13
                                      ,param_14);
          uVar3 = (ulong)local_41c;
          uVar7 = binbuf_write(uVar7,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                               *(uint **)(param_9 + 0x30),local_418,"",local_41c,param_13,param_14);
          if ((int)uVar7 != 0) {
            pd_error(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                     param_9,"%s: write failed",*puVar1,uVar3,param_13,param_14);
          }
          return;
        }
        iVar2 = strcmp(__s1,"-c");
        if (iVar2 != 0) break;
        local_41c = 1;
        piVar5 = piVar5 + 4;
        bVar6 = uVar4 == 0;
        uVar4 = uVar4 - 1;
        param_11 = extraout_RDX_01;
        param_1 = extraout_XMM0_Qa;
        if (bVar6) goto LAB_0055730c;
      }
      uVar7 = pd_error(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                       param_9,"text write: unknown flag ...",extraout_RDX_01,param_12,param_13,
                       param_14);
      uVar7 = postatom(uVar7,param_2,param_3,param_4,param_5,param_6,param_7,param_8,uVar4 + 1,
                       piVar5,extraout_RDX,param_12,param_13,param_14);
      param_1 = endpost(uVar7,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      piVar5 = piVar5 + 4;
      bVar6 = uVar4 != 0;
      uVar4 = uVar4 - 1;
      param_11 = extraout_RDX_00;
    } while (bVar6);
  }
LAB_0055730c:
  pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
           "text write: no file name given",param_11,param_12,param_13,param_14);
  return;
}


