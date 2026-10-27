// Function : addrinfo_sort_list
// Namespace: 
// Entry    : 00545ee0
// Prototype: undefined addrinfo_sort_list(long * param_1, undefined * param_2)
// Body     : 00545ee0 - 00545fa2


void addrinfo_sort_list(long *param_1,undefined *param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  if (*param_1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar6 = *param_1;
    lVar7 = 0;
    do {
      lVar1 = *(long *)(lVar6 + 0x28);
      lVar3 = lVar6;
      if (lVar7 == 0) {
        lVar5 = 0;
      }
      else {
        iVar2 = (*(code *)param_2)(lVar6,lVar7);
        lVar5 = lVar7;
        if (-1 < iVar2) {
          do {
            lVar4 = lVar5;
            lVar5 = *(long *)(lVar4 + 0x28);
            if (lVar5 == 0) {
              lVar5 = 0;
              goto LAB_00545f82;
            }
            iVar2 = (*(code *)param_2)(lVar6,lVar5);
          } while (-1 < iVar2);
          if (lVar4 != 0) {
LAB_00545f82:
            *(long *)(lVar4 + 0x28) = lVar6;
            lVar3 = lVar7;
          }
        }
      }
      *(long *)(lVar6 + 0x28) = lVar5;
      lVar6 = lVar1;
      lVar7 = lVar3;
    } while (lVar1 != 0);
  }
  *param_1 = lVar3;
  return;
}


