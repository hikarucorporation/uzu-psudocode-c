// Function : ~hb_ot_map_builder_t
// Namespace: hb_ot_map_builder_t
// Entry    : 0041d480
// Prototype: undefined ~hb_ot_map_builder_t(hb_ot_map_builder_t * this)
// Body     : 0041d480 - 0041d53c


/* hb_ot_map_builder_t::~hb_ot_map_builder_t() */

void __thiscall hb_ot_map_builder_t::~hb_ot_map_builder_t(hb_ot_map_builder_t *this)

{
  hb_ot_map_builder_t *phVar1;
  hb_ot_map_builder_t *phVar2;
  int iVar3;
  
  phVar1 = this + 0x50;
  if (*(int *)(this + 0x50) != 0) {
    *(undefined4 *)(this + 0x54) = 0;
    free(*(void **)(this + 0x58));
  }
  *(undefined8 *)phVar1 = 0;
  *(undefined8 *)(this + 0x58) = 0;
  phVar2 = this + 0x60;
  if (*(int *)(this + 0x60) != 0) {
    *(undefined4 *)(this + 100) = 0;
    free(*(void **)(this + 0x68));
  }
  *(undefined8 *)phVar2 = 0;
  *(undefined8 *)(this + 0x68) = 0;
  if (*(int *)(this + 0x70) == 0) {
    *(undefined8 *)(this + 0x70) = 0;
    *(undefined8 *)(this + 0x78) = 0;
    *(undefined8 *)phVar2 = 0;
    *(undefined8 *)(this + 0x68) = 0;
    iVar3 = *(int *)phVar1;
  }
  else {
    *(undefined4 *)(this + 0x74) = 0;
    free(*(void **)(this + 0x78));
    *(undefined8 *)(this + 0x70) = 0;
    *(undefined8 *)(this + 0x78) = 0;
    if (*(int *)(this + 0x60) != 0) {
      *(undefined4 *)(this + 100) = 0;
      free(*(void **)(this + 0x68));
    }
    *(undefined8 *)phVar2 = 0;
    *(undefined8 *)(this + 0x68) = 0;
    iVar3 = *(int *)phVar1;
  }
  if (iVar3 != 0) {
    *(undefined4 *)(this + 0x54) = 0;
    free(*(void **)(this + 0x58));
  }
  *(undefined8 *)phVar1 = 0;
  *(undefined8 *)(this + 0x58) = 0;
  return;
}


