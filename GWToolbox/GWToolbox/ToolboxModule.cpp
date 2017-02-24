#include "ToolboxModule.h"

void ToolboxModule::LoadSettingVisible(CSimpleIni* ini) {
	visible = ini->GetBoolValue(Name(), "visible", true);
}

void ToolboxModule::SaveSettingVisible(CSimpleIni* ini) const {
	ini->SetBoolValue(Name(), "visible", visible);
}