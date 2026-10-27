// Function : override_features_hangul
// Namespace: 
// Entry    : 00421960
// Prototype: undefined override_features_hangul(long param_1)
// Body     : 00421960 - 0042199b


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* override_features_hangul(hb_ot_shape_planner_t*) */

void __cdecl override_features_hangul(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = hb_vector_t<hb_ot_map_builder_t::feature_info_t,false>::push
                     ((hb_vector_t<hb_ot_map_builder_t::feature_info_t,false> *)(param_1 + 0x78));
  *(undefined4 *)puVar1 = 0x63616c74;
  *(undefined4 *)((long)puVar1 + 4) = *(undefined4 *)(param_1 + 0x7c);
  puVar1[1] = 0x100000000;
  *(undefined4 *)(puVar1 + 2) = 0;
  *(undefined4 *)((long)puVar1 + 0x14) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x74);
  return;
}


