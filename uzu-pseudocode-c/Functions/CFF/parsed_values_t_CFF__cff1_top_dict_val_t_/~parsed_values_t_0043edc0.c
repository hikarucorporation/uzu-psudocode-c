// Function : ~parsed_values_t
// Namespace: CFF:parsed_values_t_CFF__cff1_top_dict_val_t_
// Entry    : 0043edc0
// Prototype: undefined ~parsed_values_t(parsed_values_t<CFF::cff1_top_dict_val_t> * this)
// Body     : 0043edc0 - 0043ede2


/* CFF::parsed_values_t<CFF::cff1_top_dict_val_t>::~parsed_values_t() */

void __thiscall
CFF::parsed_values_t<CFF::cff1_top_dict_val_t>::~parsed_values_t
          (parsed_values_t<CFF::cff1_top_dict_val_t> *this)

{
  if (*(int *)(this + 8) != 0) {
    *(undefined4 *)(this + 0xc) = 0;
    free(*(void **)(this + 0x10));
  }
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  return;
}


