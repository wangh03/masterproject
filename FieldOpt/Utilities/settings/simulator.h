/******************************************************************************
 *
 * simulator.h
 *
 * Created: 28.09.2015 2015 by einar
 *
 * This file is part of the FieldOpt project.
 *
 * Copyright (C) 2015-2015 Einar J.M. Baumann <einar.baumann@ntnu.no>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301 USA
 *****************************************************************************/

#ifndef SETTINGS_SIMULATOR_H
#define SETTINGS_SIMULATOR_H

#include "Utilities/settings/settings.h"

#include <QStringList>

namespace Utilities {
namespace Settings {

/*!
 * \brief The Simulator class contains simulator-specific settings. Simulator settings objects
 * may _only_ be created by the Settings class. They are created when reading a JSON-formatted
 * "driver file".
 */
class Simulator
{
    friend class Settings;

public:
    enum SimulatorType { ECLIPSE };

    SimulatorType type() const { return type_; } //!< Get the simulator type (e.g. ECLIPSE).
    QStringList *commands() const { return commands_; } //!< Get the simulator commands (commands used to execute a simulation). Each list element is executed in sequence.
    QString driver_file_path() const { return driver_file_path_; } //!< Get the path to the driver file.
    QString output_directory() const { return output_directory_; } //!< Get the output directory path.

private:
    Simulator(QJsonObject json_simulator, QString output_directory);
    SimulatorType type_;
    QStringList *commands_;
    QString driver_file_path_;
    QString output_directory_;
};

}
}

#endif // SETTINGS_SIMULATOR_H
