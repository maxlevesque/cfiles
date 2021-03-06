/* cfiles, an analysis frontend for the Chemfiles library
 * Copyright (C) 2015 Guillaume Fraux
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/
*/

#include "CommandFactory.hpp"

#include "Help.hpp"
#include "Rdf.hpp"
#include "Convert.hpp"

const std::vector<command_creator>& all_commands() {
    static std::vector<command_creator> commands = {
        {"help", [](){return std::unique_ptr<Command>(new Help());}},
        {"rdf", [](){return std::unique_ptr<Command>(new Rdf());}},
        {"convert", [](){return std::unique_ptr<Command>(new Convert());}},
    };
    return commands;
}
