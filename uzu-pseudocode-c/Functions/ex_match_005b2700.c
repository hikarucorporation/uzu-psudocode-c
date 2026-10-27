// Function : ex_match
// Namespace: 
// Entry    : 005b2700
// Prototype: long * ex_match(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, long param_10)
// Body     : 005b2700 - 005b2a03


long * ex_match(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long *param_9,long param_10)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined *puVar6;
  char *__s1;
  char *pcVar7;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  
  bVar2 = false;
  do {
    switch(param_9[1]) {
    case 0:
      if (param_10 != 0) {
        pcVar7 = "expr syntax error: an open %s not matched\n";
LAB_005b297e:
        param_9 = (long *)0x0;
        post(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,pcVar7);
      }
      return param_9;
    case 1:
    case 2:
    case 7:
    case 8:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
      break;
    case 3:
      lVar1 = *param_9;
      if (lVar1 == param_10) {
        return param_9;
      }
      if ((lVar1 == 0xf001a && param_10 == 0xf0018) || (lVar1 == 0xf0018 && param_10 == 0xf001a)) {
        pcVar7 = "expr syntax error: prenthesis or brackets not matched\n";
        goto LAB_005b29de;
      }
      if (lVar1 == 0xf001b) {
        plVar5 = ex_match(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                          param_9 + 4,0xf001a);
        if (plVar5 == (long *)0x0) {
          return (long *)0x0;
        }
        param_9[1] = 9;
        param_1 = extraout_XMM0_Qa_03;
      }
      else {
        if (lVar1 != 0xf0019) {
          if ((lVar1 == 0xc0010) &&
             ((!bVar2 || ((param_9[-3] == 3 && ((param_9[-4] | 2U) != 0xf001a)))))) {
            *param_9 = 0xe0015;
          }
          break;
        }
        plVar5 = ex_match(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                          param_9 + 4,0xf0018);
        if (plVar5 == (long *)0x0) {
          return (long *)0x0;
        }
        if (((bVar2) && (param_9[-3] == 1)) && (param_9[-4] == 0)) {
          param_9[-3] = 5;
          param_9[-4] = 0;
        }
        param_9[1] = 10;
        param_1 = extraout_XMM0_Qa_04;
      }
      *param_9 = (long)plVar5;
      param_9 = plVar5;
      break;
    case 4:
      if (param_9[4] == 0xf001b) {
        pcVar7 = (char *)*param_9;
        __s1 = *(char **)PTR_ex_funcs_00715e00;
        if (__s1 == (char *)0x0) {
LAB_005b2967:
          pcVar7 = "expr: error: function %s not found\n";
          goto LAB_005b297e;
        }
        puVar6 = PTR_ex_funcs_00715e00;
        while (iVar3 = strcmp(__s1,pcVar7), param_1 = extraout_XMM0_Qa_01, iVar3 != 0) {
          __s1 = *(char **)(puVar6 + 0x18);
          puVar6 = puVar6 + 0x18;
          if (__s1 == (char *)0x0) goto LAB_005b2967;
        }
        param_9[1] = 6;
        *param_9 = (long)puVar6;
      }
      else if (param_9[4] == 0xf0019) {
        param_9[1] = 5;
        pcVar7 = (char *)*param_9;
        uVar4 = ex_getsym(pcVar7,param_9);
        if ((int)uVar4 != 0) {
          pcVar7 = "expr: syntax error: problem with ex_getsym\n";
          param_1 = extraout_XMM0_Qa;
          goto LAB_005b29de;
        }
        free(pcVar7);
        param_1 = extraout_XMM0_Qa_00;
      }
      else {
        if ((param_9[5] != 0) && (param_9[5] != 3)) {
          pcVar7 = "expr: syntax error: bad string \'%s\'\n";
          goto LAB_005b297e;
        }
        param_9[1] = 0x15;
        uVar4 = ex_getsym((char *)*param_9,param_9);
        param_1 = extraout_XMM0_Qa_02;
        if ((int)uVar4 != 0) {
          pcVar7 = "expr: variable \'%s\' not found";
          goto LAB_005b297e;
        }
      }
      break;
    case 5:
    case 6:
    case 9:
    case 10:
      pcVar7 = "ex_match: unexpected type, %ld\n";
      goto LAB_005b297e;
    default:
      pcVar7 = "ex_match: bad type\n";
LAB_005b29de:
      post(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,pcVar7);
      return (long *)0x0;
    case 0x10:
      if ((param_9[5] != 3) || (param_9[4] != 0xf0019)) {
        param_9[1] = 0x11;
      }
      break;
    case 0x12:
      if ((param_9[5] != 3) || (param_9[4] != 0xf0019)) {
        param_9[1] = 0x14;
      }
    }
    param_9 = param_9 + 4;
    bVar2 = true;
  } while( true );
}


