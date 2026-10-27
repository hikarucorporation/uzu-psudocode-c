// Function : realloc_vector<CFF::cff2_private_dict_values_base_t<CFF::dict_val_t>,(void*)0>
// Namespace: hb_vector_t_CFF__cff2_private_dict_values_base_t_CFF__dict_val_t__false_
// Entry    : 0045bf60
// Prototype: void * realloc_vector<CFF::cff2_private_dict_values_base_t<CFF::dict_val_t>,(void*)0>(long param_1, uint param_2)
// Body     : 0045bf60 - 0045c074


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* CFF::cff2_private_dict_values_base_t<CFF::dict_val_t>*
   hb_vector_t<CFF::cff2_private_dict_values_base_t<CFF::dict_val_t>,
   false>::realloc_vector<CFF::cff2_private_dict_values_base_t<CFF::dict_val_t>, (void*)0>(unsigned
   int, hb_priority<0u>) */

void * __cdecl
hb_vector_t<CFF::cff2_private_dict_values_base_t<CFF::dict_val_t>,false>::
realloc_vector<CFF::cff2_private_dict_values_base_t<CFF::dict_val_t>,(void*)0>
          (long param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  void *pvVar6;
  long lVar7;
  ulong uVar8;
  
  if (param_2 == 0) {
    pvVar6 = (void *)0x0;
  }
  else {
    pvVar6 = malloc((ulong)param_2 * 0x30);
    if (pvVar6 == (void *)0x0) {
      return (void *)0x0;
    }
    if (*(int *)(param_1 + 4) != 0) {
      lVar7 = 0x10;
      uVar8 = 0;
      do {
        puVar1 = (undefined8 *)((long)pvVar6 + lVar7 + 0x10);
        *puVar1 = 0;
        puVar1[1] = 0;
        *(undefined8 *)((long)pvVar6 + lVar7) = 0;
        ((undefined8 *)((long)pvVar6 + lVar7))[1] = 0;
        puVar1 = (undefined8 *)((long)pvVar6 + lVar7 + -0x10);
        *puVar1 = 0;
        puVar1[1] = 0;
        lVar4 = *(long *)(param_1 + 8);
        *(undefined4 *)((long)pvVar6 + lVar7 + -0x10) = *(undefined4 *)(lVar4 + -0x10 + lVar7);
        uVar3 = *(undefined4 *)((long)pvVar6 + lVar7 + -8);
        *(undefined4 *)((long)pvVar6 + lVar7 + -8) = *(undefined4 *)(lVar4 + -8 + lVar7);
        *(undefined4 *)(lVar4 + -8 + lVar7) = uVar3;
        uVar3 = *(undefined4 *)((long)pvVar6 + lVar7 + -4);
        *(undefined4 *)((long)pvVar6 + lVar7 + -4) = *(undefined4 *)(lVar4 + -4 + lVar7);
        *(undefined4 *)(lVar4 + -4 + lVar7) = uVar3;
        uVar5 = *(undefined8 *)((long)pvVar6 + lVar7);
        *(undefined8 *)((long)pvVar6 + lVar7) = *(undefined8 *)(lVar4 + lVar7);
        *(undefined8 *)(lVar4 + lVar7) = uVar5;
        *(undefined4 *)((long)pvVar6 + lVar7 + 0x18) = *(undefined4 *)(lVar4 + 0x18 + lVar7);
        puVar1 = (undefined8 *)(lVar4 + 8 + lVar7);
        uVar5 = puVar1[1];
        puVar2 = (undefined8 *)((long)pvVar6 + lVar7 + 8);
        *puVar2 = *puVar1;
        puVar2[1] = uVar5;
        lVar4 = *(long *)(param_1 + 8);
        if (*(int *)(lVar4 + -8 + lVar7) != 0) {
          *(undefined4 *)(lVar4 + -4 + lVar7) = 0;
          free(*(void **)(lVar4 + lVar7));
        }
        puVar1 = (undefined8 *)(lVar4 + -8 + lVar7);
        *puVar1 = 0;
        puVar1[1] = 0;
        uVar8 = uVar8 + 1;
        lVar7 = lVar7 + 0x30;
      } while (uVar8 < *(uint *)(param_1 + 4));
    }
  }
  free(*(void **)(param_1 + 8));
  return pvVar6;
}


