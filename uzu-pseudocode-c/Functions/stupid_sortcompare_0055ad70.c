// Function : stupid_sortcompare
// Namespace: 
// Entry    : 0055ad70
// Prototype: int stupid_sortcompare(undefined8 * param_1, undefined8 * param_2)
// Body     : 0055ad70 - 0055aeb1


int stupid_sortcompare(undefined8 *param_1,undefined8 *param_2)

{
  uint *puVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  
  lVar6 = __tls_get_addr(&PTR_007153d8);
  piVar3 = *(int **)(lVar6 + 0x110);
  puVar9 = (uint *)*param_1;
  puVar8 = (uint *)*param_2;
  iVar4 = piVar3[1];
  if (iVar4 != 0) {
    iVar7 = iVar4;
    do {
      if ((*puVar9 & 0xfffffffe) == 4) goto LAB_0055addf;
      iVar7 = iVar7 + -1;
      puVar9 = puVar9 + 4;
    } while (iVar7 != 0);
    do {
      if ((*puVar8 & 0xfffffffe) == 4) goto LAB_0055ae9c;
      iVar4 = iVar4 + -1;
      puVar8 = puVar8 + 4;
    } while (iVar4 != 0);
  }
  uVar5 = *puVar9;
  while ((uVar5 & 0xfffffffe) != 4) {
    uVar2 = *puVar8;
    if ((uVar2 & 0xfffffffe) == 4) {
LAB_0055aead:
      return *piVar3;
    }
    if (uVar5 == 2) {
      if (uVar2 != 2) goto LAB_0055aead;
      iVar4 = strcmp((char *)**(undefined8 **)(puVar9 + 2),(char *)**(undefined8 **)(puVar8 + 2));
      if (iVar4 != 0) {
        return iVar4 * *piVar3;
      }
    }
    else if (uVar5 == 1) {
      if ((uVar2 != 1) || ((float)puVar9[2] < (float)puVar8[2])) goto LAB_0055ae9c;
      if ((float)puVar9[2] != (float)puVar8[2]) goto LAB_0055aead;
    }
    puVar8 = puVar8 + 4;
    puVar1 = puVar9 + 4;
    puVar9 = puVar9 + 4;
    uVar5 = *puVar1;
  }
  if ((*puVar8 & 0xfffffffe) == 4) {
LAB_0055ae8d:
    return (uint)(puVar8 <= puVar9) * 2 + -1;
  }
LAB_0055ae9c:
  return -*piVar3;
  while( true ) {
    iVar4 = iVar4 + -1;
    puVar8 = puVar8 + 4;
    if (iVar4 == 0) break;
LAB_0055addf:
    if ((*puVar8 & 0xfffffffe) == 4) goto LAB_0055ae8d;
  }
  goto LAB_0055ae9c;
}


