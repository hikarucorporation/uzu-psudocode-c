// Function : json_parse_value
// Namespace: 
// Entry    : 0018a8f0
// Prototype: undefined json_parse_value(long * param_1, int param_2, long * param_3)
// Body     : 0018a8f0 - 0018ab83


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* json_parse_value(json_parse_state_s*, int, json_value_s*) */

void __cdecl json_parse_value(long *param_1,int param_2,long *param_3)

{
  ulong uVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  int iVar9;
  
  uVar3 = param_1[3];
  lVar4 = *param_1;
  uVar5 = param_1[1];
  json_skip_all_skippables(param_1);
  if (param_2 == 0) {
    lVar6 = param_1[2];
    cVar2 = *(char *)(lVar4 + lVar6);
    switch(cVar2) {
    case '\"':
    case '\'':
      param_3[1] = 0;
      plVar7 = (long *)param_1[5];
      *param_3 = (long)plVar7;
      param_1[5] = (long)(plVar7 + 2);
      json_parse_string(param_1,plVar7);
      return;
    default:
      uVar1 = lVar6 + 4;
      if ((uVar5 < uVar1) || (cVar2 != 't')) {
        if ((uVar5 < lVar6 + 5U) || (cVar2 != 'f')) {
          if ((((uVar1 <= uVar5) && (cVar2 == 'n')) && (*(char *)(lVar6 + 1 + lVar4) == 'u')) &&
             ((*(char *)(lVar6 + 2 + lVar4) == 'l' && (*(char *)(lVar6 + 3 + lVar4) == 'l')))) {
            param_3[1] = 6;
            goto LAB_0018aa06;
          }
        }
        else if (((*(char *)(lVar6 + 1 + lVar4) == 'a') && (*(char *)(lVar6 + 2 + lVar4) == 'l')) &&
                ((*(char *)(lVar6 + 3 + lVar4) == 's' && (*(char *)(lVar4 + uVar1) == 'e')))) {
          param_3[1] = 5;
          *param_3 = 0;
          param_1[2] = lVar6 + 5U;
          return;
        }
      }
      else if (((*(char *)(lVar6 + 1 + lVar4) == 'r') && (*(char *)(lVar6 + 2 + lVar4) == 'u')) &&
              (*(char *)(lVar6 + 3 + lVar4) == 'e')) {
        param_3[1] = 4;
LAB_0018aa06:
        *param_3 = 0;
        param_1[2] = uVar1;
        return;
      }
      if ((((uVar3 & 0x1000) == 0) || (uVar5 < lVar6 + 3U)) || (cVar2 != 'N')) {
        if ((((((uVar3 & 0x1000) != 0) && (lVar6 + 8U <= uVar5)) &&
             ((cVar2 == 'I' &&
              (((*(char *)(lVar6 + 1 + lVar4) == 'n' && (*(char *)(lVar6 + 2 + lVar4) == 'f')) &&
               (*(char *)(lVar4 + lVar6 + 3U) == 'i')))))) &&
            ((*(char *)(lVar4 + uVar1) == 'n' && (*(char *)(lVar4 + lVar6 + 5) == 'i')))) &&
           ((*(char *)(lVar6 + 6 + lVar4) == 't' && (*(char *)(lVar6 + 7 + lVar4) == 'y'))))
        goto switchD_0018a968_caseD_2b;
      }
      else if ((*(char *)(lVar6 + 1 + lVar4) == 'a') && (*(char *)(lVar6 + 2 + lVar4) == 'N'))
      goto switchD_0018a968_caseD_2b;
      return;
    case '+':
    case '-':
    case '.':
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
switchD_0018a968_caseD_2b:
      param_3[1] = 1;
      plVar7 = (long *)param_1[5];
      *param_3 = (long)plVar7;
      param_1[5] = (long)(plVar7 + 2);
      json_parse_number(param_1,plVar7);
      return;
    case '[':
      param_3[1] = 3;
      plVar7 = (long *)param_1[5];
      *param_3 = (long)plVar7;
      param_1[5] = (long)(plVar7 + 2);
      json_parse_array(param_1,plVar7);
      return;
    case '{':
      param_3[1] = 2;
      puVar8 = (undefined8 *)param_1[5];
      *param_3 = (long)puVar8;
      param_1[5] = (long)(puVar8 + 2);
      iVar9 = 0;
    }
  }
  else {
    param_3[1] = 2;
    puVar8 = (undefined8 *)param_1[5];
    *param_3 = (long)puVar8;
    param_1[5] = (long)(puVar8 + 2);
    iVar9 = 1;
  }
  json_parse_object(param_1,iVar9,puVar8);
  return;
}


