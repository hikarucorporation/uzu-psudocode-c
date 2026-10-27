// Function : libpdimp_free
// Namespace: 
// Entry    : 0055da50
// Prototype: undefined libpdimp_free(undefined8 * param_1)
// Body     : 0055da50 - 0055da9b


void libpdimp_free(undefined8 *param_1)

{
  if (param_1 == (undefined8 *)PTR_libpd_mainimp_00715cf0) {
    return;
  }
  if (param_1[0xd] != 0) {
    (*(code *)param_1[0x10])();
  }
  if ((void *)param_1[0xe] != (void *)0x0) {
    free((void *)param_1[0xe]);
  }
  if ((param_1[0xf] != 0) && ((code *)param_1[0x11] != (code *)0x0)) {
    (*(code *)param_1[0x11])();
  }
  free(param_1);
  return;
}


