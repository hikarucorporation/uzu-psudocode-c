// Function : json_get_value_size
// Namespace: 
// Entry    : 00189b40
// Prototype: undefined8 json_get_value_size(long * param_1, int param_2)
// Body     : 00189b40 - 00189d71


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* json_get_value_size(json_parse_state_s*, int) */

undefined8 __cdecl json_get_value_size(long *param_1,int param_2)

{
  ulong uVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  int iVar9;
  
  uVar3 = param_1[3];
  lVar4 = *param_1;
  uVar5 = param_1[1];
  lVar7 = param_1[6] + 0x10;
  if ((uVar3 & 0x80) != 0) {
    lVar7 = param_1[6] + 0x28;
  }
  param_1[6] = lVar7;
  if (param_2 != 0) {
    iVar9 = 1;
LAB_00189b7a:
    uVar8 = json_get_object_size(param_1,iVar9);
    return uVar8;
  }
  uVar8 = json_skip_all_skippables(param_1);
  if ((int)uVar8 != 0) {
    param_1[10] = 7;
    return 1;
  }
  lVar7 = param_1[2];
  cVar2 = *(char *)(lVar4 + lVar7);
  switch(cVar2) {
  case '\"':
switchD_00189bce_caseD_22:
    uVar8 = json_get_string_size(param_1,0);
    return uVar8;
  default:
    uVar1 = lVar7 + 4;
    if ((uVar5 < uVar1) || (cVar2 != 't')) {
      if ((lVar7 + 5U <= uVar5) &&
         ((((cVar2 == 'f' && (*(char *)(lVar7 + 1 + lVar4) == 'a')) &&
           (*(char *)(lVar7 + 2 + lVar4) == 'l')) &&
          ((*(char *)(lVar7 + 3 + lVar4) == 's' && (*(char *)(lVar4 + uVar1) == 'e')))))) {
        param_1[2] = lVar7 + 5U;
        return 0;
      }
    }
    else if (((*(char *)(lVar7 + 1 + lVar4) == 'r') && (*(char *)(lVar7 + 2 + lVar4) == 'u')) &&
            (*(char *)(lVar7 + 3 + lVar4) == 'e')) goto LAB_00189cdd;
    if ((((uVar1 <= uVar5) && (lVar6 = *param_1, *(char *)(lVar6 + lVar7) == 'n')) &&
        (*(char *)(lVar7 + 1 + lVar6) == 'u')) &&
       ((*(char *)(lVar7 + 2 + lVar6) == 'l' && (*(char *)(lVar7 + 3 + lVar6) == 'l')))) {
LAB_00189cdd:
      param_1[2] = uVar1;
      return 0;
    }
    if ((((uVar3 & 0x1000) == 0) || (uVar5 < lVar7 + 3U)) || (cVar2 != 'N')) {
      if (((((uVar3 & 0x1000) != 0) && (lVar7 + 8U <= uVar5)) && (cVar2 == 'I')) &&
         (((((*(char *)(lVar7 + 1 + lVar4) == 'n' && (*(char *)(lVar7 + 2 + lVar4) == 'f')) &&
            ((*(char *)(lVar4 + lVar7 + 3U) == 'i' &&
             ((*(char *)(lVar4 + uVar1) == 'n' && (*(char *)(lVar4 + lVar7 + 5) == 'i')))))) &&
           (*(char *)(lVar7 + 6 + lVar4) == 't')) && (*(char *)(lVar7 + 7 + lVar4) == 'y'))))
      goto switchD_00189bce_caseD_2d;
    }
    else if ((*(char *)(lVar7 + 1 + lVar4) == 'a') && (*(char *)(lVar7 + 2 + lVar4) == 'N'))
    goto switchD_00189bce_caseD_2d;
    goto LAB_00189d65;
  case '\'':
    if ((uVar3 & 0x100) != 0) goto switchD_00189bce_caseD_22;
LAB_00189d65:
    param_1[10] = 6;
    return 1;
  case '+':
    uVar3 = uVar3 & 0x400;
    break;
  case '-':
  case '0':
  case '1':
  case '2':
  case '3':
  case '4':
  case '5':
  case '6':
  case '7':
  case '8':
  case '9':
    goto switchD_00189bce_caseD_2d;
  case '.':
    uVar3 = uVar3 & 0x800;
    break;
  case '[':
    uVar8 = json_get_array_size(param_1);
    return uVar8;
  case '{':
    iVar9 = 0;
    goto LAB_00189b7a;
  }
  if (uVar3 == 0) {
    param_1[10] = 5;
    return 1;
  }
switchD_00189bce_caseD_2d:
  uVar8 = json_get_number_size(param_1);
  return uVar8;
}


