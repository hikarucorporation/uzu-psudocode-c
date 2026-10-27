// Function : patchlist_append
// Namespace: 
// Entry    : 00544f60
// Prototype: undefined8 * patchlist_append(undefined8 * param_1, long param_2, char * param_3)
// Body     : 00544f60 - 005450aa


undefined8 * patchlist_append(undefined8 *param_1,long param_2,char *param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  size_t sVar4;
  char *pcVar5;
  undefined8 *puVar6;
  long *plVar7;
  
  plVar2 = (long *)namelist_append_files((undefined8 *)0x0,param_2);
  if (plVar2 != (long *)0x0) {
    plVar7 = plVar2;
    if (param_3 == (char *)0x0) {
      do {
        while( true ) {
          puVar3 = getbytes(0x18);
          *puVar3 = 0;
          sVar4 = strlen((char *)plVar7[1]);
          pcVar5 = getbytes(sVar4 + 1);
          puVar3[1] = pcVar5;
          strcpy(pcVar5,(char *)plVar7[1]);
          puVar3[2] = 0;
          if (param_1 == (undefined8 *)0x0) break;
          puVar1 = param_1;
          do {
            puVar6 = puVar1;
            puVar1 = (undefined8 *)*puVar6;
          } while (puVar1 != (undefined8 *)0x0);
          *puVar6 = puVar3;
          plVar7 = (long *)*plVar7;
          if (plVar7 == (long *)0x0) goto LAB_00545096;
        }
        plVar7 = (long *)*plVar7;
        param_1 = puVar3;
      } while (plVar7 != (long *)0x0);
    }
    else {
      do {
        while( true ) {
          puVar3 = getbytes(0x18);
          *puVar3 = 0;
          sVar4 = strlen((char *)plVar7[1]);
          pcVar5 = getbytes(sVar4 + 1);
          puVar3[1] = pcVar5;
          strcpy(pcVar5,(char *)plVar7[1]);
          sVar4 = strlen(param_3);
          pcVar5 = getbytes(sVar4 + 1);
          puVar3[2] = pcVar5;
          strcpy(pcVar5,param_3);
          if (param_1 == (undefined8 *)0x0) break;
          puVar1 = param_1;
          do {
            puVar6 = puVar1;
            puVar1 = (undefined8 *)*puVar6;
          } while (puVar1 != (undefined8 *)0x0);
          *puVar6 = puVar3;
          plVar7 = (long *)*plVar7;
          if (plVar7 == (long *)0x0) goto LAB_00545096;
        }
        plVar7 = (long *)*plVar7;
        param_1 = puVar3;
      } while (plVar7 != (long *)0x0);
    }
  }
LAB_00545096:
  namelist_free(plVar2);
  return param_1;
}


