// Function : realloc_vector<CFF::cff2_font_dict_values_t,(void*)0>
// Namespace: hb_vector_t_CFF__cff2_font_dict_values_t_false_
// Entry    : 0045be40
// Prototype: void * realloc_vector<CFF::cff2_font_dict_values_t,(void*)0>(long param_1, uint param_2)
// Body     : 0045be40 - 0045bf56


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* CFF::cff2_font_dict_values_t* hb_vector_t<CFF::cff2_font_dict_values_t,
   false>::realloc_vector<CFF::cff2_font_dict_values_t, (void*)0>(unsigned int, hb_priority<0u>) */

void * __cdecl
hb_vector_t<CFF::cff2_font_dict_values_t,false>::
realloc_vector<CFF::cff2_font_dict_values_t,(void*)0>(long param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  void *pvVar5;
  long lVar6;
  ulong uVar7;
  
  if (param_2 == 0) {
    pvVar5 = (void *)0x0;
  }
  else {
    pvVar5 = malloc((ulong)param_2 * 0x28);
    if (pvVar5 == (void *)0x0) {
      return (void *)0x0;
    }
    if (*(int *)(param_1 + 4) != 0) {
      lVar6 = 0x10;
      uVar7 = 0;
      do {
        *(undefined8 *)((long)pvVar5 + lVar6) = 0;
        ((undefined8 *)((long)pvVar5 + lVar6))[1] = 0;
        puVar1 = (undefined8 *)((long)pvVar5 + lVar6 + -0x10);
        *puVar1 = 0;
        puVar1[1] = 0;
        *(undefined8 *)((long)pvVar5 + lVar6 + 0x10) = 0;
        lVar3 = *(long *)(param_1 + 8);
        *(undefined4 *)((long)pvVar5 + lVar6 + -0x10) = *(undefined4 *)(lVar3 + -0x10 + lVar6);
        uVar2 = *(undefined4 *)((long)pvVar5 + lVar6 + -8);
        *(undefined4 *)((long)pvVar5 + lVar6 + -8) = *(undefined4 *)(lVar3 + -8 + lVar6);
        *(undefined4 *)(lVar3 + -8 + lVar6) = uVar2;
        uVar2 = *(undefined4 *)((long)pvVar5 + lVar6 + -4);
        *(undefined4 *)((long)pvVar5 + lVar6 + -4) = *(undefined4 *)(lVar3 + -4 + lVar6);
        *(undefined4 *)(lVar3 + -4 + lVar6) = uVar2;
        uVar4 = *(undefined8 *)((long)pvVar5 + lVar6);
        *(undefined8 *)((long)pvVar5 + lVar6) = *(undefined8 *)(lVar3 + lVar6);
        *(undefined8 *)(lVar3 + lVar6) = uVar4;
        *(undefined4 *)((long)pvVar5 + lVar6 + 0x10) = *(undefined4 *)(lVar3 + 0x10 + lVar6);
        *(undefined8 *)((long)pvVar5 + lVar6 + 8) = *(undefined8 *)(lVar3 + 8 + lVar6);
        lVar3 = *(long *)(param_1 + 8);
        if (*(int *)(lVar3 + -8 + lVar6) != 0) {
          *(undefined4 *)(lVar3 + -4 + lVar6) = 0;
          free(*(void **)(lVar3 + lVar6));
        }
        puVar1 = (undefined8 *)(lVar3 + -8 + lVar6);
        *puVar1 = 0;
        puVar1[1] = 0;
        uVar7 = uVar7 + 1;
        lVar6 = lVar6 + 0x28;
      } while (uVar7 < *(uint *)(param_1 + 4));
    }
  }
  free(*(void **)(param_1 + 8));
  return pvVar5;
}


