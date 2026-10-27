// Function : strnatcmp8
// Namespace: Steinberg
// Entry    : 0017b8d0
// Prototype: int strnatcmp8(char * param_1, char * param_2, char param_3)
// Body     : 0017b8d0 - 0017b8d4


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* Steinberg::strnatcmp8(char const*, char const*, bool) */

int __cdecl Steinberg::strnatcmp8(char *param_1,char *param_2,char param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  char *pcVar9;
  char *pcVar10;
  
  iVar6 = 1;
  if (param_1 == (char *)0x0) {
    iVar6 = -(uint)(param_1 != (char *)0x0 || param_2 != (char *)0x0);
  }
  else if (param_2 != (char *)0x0) {
    cVar2 = *param_1;
    while (cVar2 != '\0') {
      while( true ) {
        cVar5 = *param_2;
        iVar6 = (int)cVar5;
        if (iVar6 == 0) {
          return 1;
        }
        iVar1 = (int)cVar2;
        if ((9 < iVar1 - 0x30U) || (9 < iVar6 - 0x30U)) break;
        lVar4 = 0;
        lVar8 = 0;
        if (cVar2 == '0') {
          do {
            cVar2 = param_1[lVar8 + 1];
            lVar8 = lVar8 + 1;
          } while (cVar2 == '0');
          param_1 = param_1 + lVar8;
          if (cVar5 != '0') goto LAB_0019e61a;
LAB_0019e6ab:
          iVar6 = (int)lVar8;
          lVar4 = 0;
          do {
            cVar5 = param_2[lVar4 + 1];
            lVar4 = lVar4 + 1;
          } while (cVar5 == '0');
          param_2 = param_2 + lVar4;
          if (cVar2 != '\0') goto LAB_0019e622;
LAB_0019e6ca:
          iVar3 = (int)lVar4;
          iVar7 = 0;
          iVar1 = 0;
          if (cVar5 != '\0') goto LAB_0019e65a;
LAB_0019e6d0:
          iVar7 = iVar1;
          lVar8 = 0;
          pcVar9 = param_1;
          pcVar10 = param_2;
        }
        else {
          if (cVar5 == '0') goto LAB_0019e6ab;
LAB_0019e61a:
          iVar6 = (int)lVar8;
          if (cVar2 == '\0') goto LAB_0019e6ca;
LAB_0019e622:
          iVar3 = (int)lVar4;
          lVar8 = 0;
          if ((int)cVar2 - 0x30U < 10) {
            lVar8 = 0;
            do {
              lVar4 = lVar8 + 1;
              lVar8 = lVar8 + 1;
              if (param_1[lVar4] == 0) break;
            } while ((int)param_1[lVar4] - 0x30U < 10);
          }
          iVar7 = (int)lVar8;
          iVar1 = iVar7;
          if (cVar5 == '\0') goto LAB_0019e6d0;
LAB_0019e65a:
          lVar8 = 0;
          pcVar9 = param_1;
          pcVar10 = param_2;
          if ((int)cVar5 - 0x30U < 10) {
            lVar8 = 0;
            do {
              lVar4 = lVar8 + 1;
              lVar8 = lVar8 + 1;
              if (param_2[lVar4] == 0) break;
            } while ((int)param_2[lVar4] - 0x30U < 10);
          }
        }
        if (iVar7 != (int)lVar8) {
          return iVar7 - (int)lVar8;
        }
        param_1 = pcVar9;
        param_2 = pcVar10;
        if (iVar7 != 0) {
          if (cVar2 != cVar5) {
LAB_0019e77b:
            return (int)cVar2 - (int)cVar5;
          }
          param_1 = pcVar9 + (ulong)(iVar7 - 1) + 1;
          param_2 = pcVar10 + (ulong)(iVar7 - 1) + 1;
          lVar8 = 1;
          while (iVar7 != (int)lVar8) {
            cVar2 = pcVar9[lVar8];
            cVar5 = pcVar10[lVar8];
            lVar8 = lVar8 + 1;
            if (cVar2 != cVar5) goto LAB_0019e77b;
          }
        }
        if (iVar6 - iVar3 != 0) {
          return iVar6 - iVar3;
        }
        cVar2 = *param_1;
        if (cVar2 == '\0') goto LAB_0019e772;
      }
      if (param_3 == '\0') {
        iVar1 = toupper(iVar1);
        iVar6 = toupper(iVar6);
        iVar6 = (int)(char)iVar1 - (int)(char)iVar6;
        if (iVar6 != 0) {
          return iVar6;
        }
      }
      else if (cVar2 != cVar5) {
        return iVar1 - iVar6;
      }
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      cVar2 = *param_1;
    }
LAB_0019e772:
    iVar6 = -(uint)(*param_2 != '\0');
  }
  return iVar6;
}


