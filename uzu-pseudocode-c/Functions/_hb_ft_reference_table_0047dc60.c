// Function : _hb_ft_reference_table
// Namespace: 
// Entry    : 0047dc60
// Prototype: undefined4 * _hb_ft_reference_table(undefined8 param_1, undefined4 param_2, undefined8 param_3)
// Body     : 0047dc60 - 0047dd3d


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* _hb_ft_reference_table(hb_face_t*, unsigned int, void*) */

undefined4 * __cdecl
_hb_ft_reference_table(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  void *__ptr;
  undefined4 *puVar2;
  size_t local_28;
  
  local_28 = 0;
  iVar1 = FT_Load_Sfnt_Table(param_3,param_2,0,0,&local_28);
  if (iVar1 == 0) {
    __ptr = malloc(local_28);
    if (__ptr != (void *)0x0) {
      iVar1 = FT_Load_Sfnt_Table(param_3,param_2,0,__ptr,&local_28);
      if (iVar1 == 0) {
        iVar1 = (int)local_28;
        if ((((int)local_28 == 0) || ((int)local_28 < 0)) ||
           (puVar2 = calloc(1,0x30), puVar2 == (undefined4 *)0x0)) {
          free(__ptr);
          return &_hb_NullPool;
        }
        *puVar2 = 1;
        puVar2[1] = 1;
        *(undefined8 *)(puVar2 + 2) = 0;
        *(void **)(puVar2 + 4) = __ptr;
        puVar2[6] = iVar1;
        puVar2[7] = 2;
        *(void **)(puVar2 + 8) = __ptr;
        *(undefined **)(puVar2 + 10) = PTR_free_00715540;
        return puVar2;
      }
      free(__ptr);
    }
  }
  return (undefined4 *)0x0;
}


