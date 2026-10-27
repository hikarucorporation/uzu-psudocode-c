// Function : print_list
// Namespace: 
// Entry    : 0057e870
// Prototype: undefined print_list(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, int * param_12, char * param_13, undefined8 param_14, undefined1 param_15)
// Body     : 0057e870 - 0057ecb0


void print_list(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9,undefined8 param_10,undefined8 param_11,int *param_12,char *param_13,
               undefined8 param_14,undefined1 param_15)

{
  int iVar1;
  undefined *puVar2;
  long *plVar3;
  int *piVar4;
  uint uVar5;
  char *pcVar6;
  ulong uVar7;
  undefined8 *puVar8;
  char *pcVar9;
  char *pcVar10;
  bool bVar11;
  float fVar12;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar13;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined1 in_stack_fffffffffffffbd8;
  char local_418 [1000];
  
  uVar5 = (uint)param_11;
  if (uVar5 == 1) {
    iVar1 = *param_12;
    if (iVar1 != 3) {
      if (iVar1 == 2) {
        plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
        puVar8 = (undefined8 *)(*plVar3 + 0x90);
        uVar5 = 1;
        uVar13 = extraout_XMM0_Qa_02;
        goto LAB_0057eaf3;
      }
      if (iVar1 != 1) {
        bug(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"print",param_10,
            param_11,param_12,param_13,param_14,param_15);
        return;
      }
      fVar12 = (float)param_12[2];
      plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
      if ((*(long *)(*(long *)(*plVar3 + 0x50) + 0x58) == 0) &&
         (*(int *)PTR_sys_printtostderr_00715f78 == 0)) {
        pcVar9 = ": ";
        if (*(char *)**(undefined8 **)(param_9 + 0x30) == '\0') {
          pcVar9 = "";
        }
        uVar13 = startlogpost((double)fVar12,param_2,param_3,param_4,param_5,param_6,param_7,param_8
                              ,param_9,2,"%s%s%g",(char *)**(undefined8 **)(param_9 + 0x30),pcVar9,
                              param_14,in_stack_fffffffffffffbd8);
      }
      else {
        uVar13 = startpost((double)fVar12,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                           "%s%s%g");
      }
      goto LAB_0057ea44;
    }
    plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
    if ((*(long *)(*(long *)(*plVar3 + 0x50) + 0x58) != 0) ||
       (*(int *)PTR_sys_printtostderr_00715f78 != 0)) {
      pcVar9 = "%s%s(pointer)";
      uVar13 = extraout_XMM0_Qa_01;
      goto LAB_0057ea3d;
    }
    pcVar9 = (char *)**(undefined8 **)(param_9 + 0x30);
    pcVar10 = ": ";
    if (*pcVar9 == '\0') {
      pcVar10 = "";
    }
    pcVar6 = "%s%s(pointer)";
    uVar13 = extraout_XMM0_Qa_01;
  }
  else {
    if (uVar5 != 0) {
      if (*param_12 == 1) {
        pcVar9 = (char *)**(undefined8 **)(param_9 + 0x30);
        piVar4 = param_12;
        plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
        puVar2 = PTR_sys_printtostderr_00715f78;
        bVar11 = *(long *)(*(long *)(*plVar3 + 0x50) + 0x58) != 0;
        pcVar10 = (char *)CONCAT71((int7)((ulong)piVar4 >> 8),bVar11);
        if (*pcVar9 == '\0') {
          if (*(int *)PTR_sys_printtostderr_00715f78 != 0 || bVar11) {
            fVar12 = (float)atom_getfloat(param_12);
            uVar13 = startpost((double)fVar12,param_2,param_3,param_4,param_5,param_6,param_7,
                               param_8,"%g");
            pcVar9 = pcVar10;
          }
          else {
            fVar12 = (float)atom_getfloat(param_12);
            uVar13 = startlogpost((double)fVar12,param_2,param_3,param_4,param_5,param_6,param_7,
                                  param_8,param_9,2,"%g",pcVar10,param_13,param_14,
                                  in_stack_fffffffffffffbd8);
            pcVar9 = pcVar10;
          }
        }
        else if (*(int *)PTR_sys_printtostderr_00715f78 != 0 || bVar11) {
          fVar12 = (float)atom_getfloat(param_12);
          uVar13 = startpost((double)fVar12,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                             "%s: %g");
          pcVar9 = pcVar10;
        }
        else {
          fVar12 = (float)atom_getfloat(param_12);
          uVar13 = startlogpost((double)fVar12,param_2,param_3,param_4,param_5,param_6,param_7,
                                param_8,param_9,2,"%s: %g",pcVar9,param_13,param_14,
                                in_stack_fffffffffffffbd8);
        }
        if (1 < (int)uVar5) {
          piVar4 = param_12 + 4;
          uVar7 = (ulong)(uVar5 - 1);
          do {
            while( true ) {
              atom_string(uVar13,param_2,param_3,param_4,param_5,param_6,param_7,param_8,piVar4,
                          local_418,(uint *)0x3e8,pcVar9,param_13,param_14,in_stack_fffffffffffffbd8
                         );
              plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
              if ((*(long *)(*(long *)(*plVar3 + 0x50) + 0x58) != 0) || (*(int *)puVar2 != 0))
              break;
              pcVar9 = local_418;
              uVar13 = startlogpost(extraout_XMM0_Qa_03,param_2,param_3,param_4,param_5,param_6,
                                    param_7,param_8,param_9,2," %s",local_418,param_13,param_14,
                                    in_stack_fffffffffffffbd8);
              piVar4 = piVar4 + 4;
              uVar7 = uVar7 - 1;
              if (uVar7 == 0) goto LAB_0057ec9a;
            }
            uVar13 = startpost(extraout_XMM0_Qa_03,param_2,param_3,param_4,param_5,param_6,param_7,
                               param_8," %s");
            piVar4 = piVar4 + 4;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
LAB_0057ec9a:
        endpost(uVar13,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
        return;
      }
      plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
      puVar8 = (undefined8 *)(*plVar3 + 0xc0);
      uVar13 = extraout_XMM0_Qa_00;
LAB_0057eaf3:
      print_anything(uVar13,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,puVar8,
                     uVar5,param_12,param_13,param_14);
      return;
    }
    plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
    if ((*(long *)(*(long *)(*plVar3 + 0x50) + 0x58) != 0) ||
       (*(int *)PTR_sys_printtostderr_00715f78 != 0)) {
      pcVar9 = "%s%sbang";
      uVar13 = extraout_XMM0_Qa;
LAB_0057ea3d:
      uVar13 = startpost(uVar13,param_2,param_3,param_4,param_5,param_6,param_7,param_8,pcVar9);
      goto LAB_0057ea44;
    }
    pcVar9 = (char *)**(undefined8 **)(param_9 + 0x30);
    pcVar10 = ": ";
    if (*pcVar9 == '\0') {
      pcVar10 = "";
    }
    pcVar6 = "%s%sbang";
    uVar13 = extraout_XMM0_Qa;
  }
  uVar13 = startlogpost(uVar13,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,2,
                        pcVar6,pcVar9,pcVar10,param_14,in_stack_fffffffffffffbd8);
LAB_0057ea44:
  endpost(uVar13,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}


