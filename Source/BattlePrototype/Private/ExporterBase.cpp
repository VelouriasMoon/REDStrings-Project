#include "ExporterBase.h"

void AExporterBase::StartExportShowDestination_Implementation() {
}

void AExporterBase::StartExportInternal() {
}

void AExporterBase::LoopExportShowDestination_Implementation(int32 LocationId, int32 areaId) {
}

void AExporterBase::ExecExportInternal(int32 LocationId, int32 areaId) {
}

void AExporterBase::EndExportShowDestination_Implementation() {
}

void AExporterBase::EndExportInternal() {
}

AExporterBase::AExporterBase() {
    this->exporterType = EExporterType::MapIcon;
}

