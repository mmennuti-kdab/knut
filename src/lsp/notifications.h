/*
  This file is part of Knut.

  SPDX-FileCopyrightText: 2024 Klarälvdalens Datakonsult AB, a KDAB Group company <info@kdab.com>

  SPDX-License-Identifier: GPL-3.0-only

  Contact KDAB at <info@kdab.com> for commercial licensing options.
*/

// File generated by spec2cpp tool
// DO NOT MAKE ANY CHANGES HERE

#pragma once

#include "notificationmessage.h"
#include "types.h"

namespace Lsp {

inline constexpr char WorkspaceDidChangeWorkspaceFoldersName[] = "workspace/didChangeWorkspaceFolders";
struct WorkspaceDidChangeWorkspaceFoldersNotification
    : public NotificationMessage<WorkspaceDidChangeWorkspaceFoldersName, DidChangeWorkspaceFoldersParams>
{
};

inline constexpr char WorkDoneProgressCancelName[] = "window/workDoneProgress/cancel";
struct WorkDoneProgressCancelNotification
    : public NotificationMessage<WorkDoneProgressCancelName, WorkDoneProgressCancelParams>
{
};

inline constexpr char WorkspaceDidCreateFilesName[] = "workspace/didCreateFiles";
struct WorkspaceDidCreateFilesNotification : public NotificationMessage<WorkspaceDidCreateFilesName, CreateFilesParams>
{
};

inline constexpr char WorkspaceDidRenameFilesName[] = "workspace/didRenameFiles";
struct WorkspaceDidRenameFilesNotification : public NotificationMessage<WorkspaceDidRenameFilesName, RenameFilesParams>
{
};

inline constexpr char WorkspaceDidDeleteFilesName[] = "workspace/didDeleteFiles";
struct WorkspaceDidDeleteFilesNotification : public NotificationMessage<WorkspaceDidDeleteFilesName, DeleteFilesParams>
{
};

inline constexpr char NotebookDocumentDidOpenName[] = "notebookDocument/didOpen";
struct NotebookDocumentDidOpenNotification
    : public NotificationMessage<NotebookDocumentDidOpenName, DidOpenNotebookDocumentParams>
{
};

inline constexpr char NotebookDocumentDidChangeName[] = "notebookDocument/didChange";
struct NotebookDocumentDidChangeNotification
    : public NotificationMessage<NotebookDocumentDidChangeName, DidChangeNotebookDocumentParams>
{
};

inline constexpr char NotebookDocumentDidSaveName[] = "notebookDocument/didSave";
struct NotebookDocumentDidSaveNotification
    : public NotificationMessage<NotebookDocumentDidSaveName, DidSaveNotebookDocumentParams>
{
};

inline constexpr char NotebookDocumentDidCloseName[] = "notebookDocument/didClose";
struct NotebookDocumentDidCloseNotification
    : public NotificationMessage<NotebookDocumentDidCloseName, DidCloseNotebookDocumentParams>
{
};

inline constexpr char InitializedName[] = "initialized";
struct InitializedNotification : public NotificationMessage<InitializedName, InitializedParams>
{
};

inline constexpr char ExitName[] = "exit";
struct ExitNotification : public NotificationMessage<ExitName, std::nullptr_t>
{
};

inline constexpr char WorkspaceDidChangeConfigurationName[] = "workspace/didChangeConfiguration";
struct WorkspaceDidChangeConfigurationNotification
    : public NotificationMessage<WorkspaceDidChangeConfigurationName, DidChangeConfigurationParams>
{
};

inline constexpr char ShowMessageName[] = "window/showMessage";
struct ShowMessageNotification : public NotificationMessage<ShowMessageName, ShowMessageParams>
{
};

inline constexpr char LogMessageName[] = "window/logMessage";
struct LogMessageNotification : public NotificationMessage<LogMessageName, LogMessageParams>
{
};

inline constexpr char TelemetryEventName[] = "telemetry/event";
struct TelemetryEventNotification : public NotificationMessage<TelemetryEventName, nlohmann::json>
{
};

inline constexpr char TextDocumentDidOpenName[] = "textDocument/didOpen";
struct TextDocumentDidOpenNotification : public NotificationMessage<TextDocumentDidOpenName, DidOpenTextDocumentParams>
{
};

inline constexpr char TextDocumentDidChangeName[] = "textDocument/didChange";
struct TextDocumentDidChangeNotification
    : public NotificationMessage<TextDocumentDidChangeName, DidChangeTextDocumentParams>
{
};

inline constexpr char TextDocumentDidCloseName[] = "textDocument/didClose";
struct TextDocumentDidCloseNotification
    : public NotificationMessage<TextDocumentDidCloseName, DidCloseTextDocumentParams>
{
};

inline constexpr char TextDocumentDidSaveName[] = "textDocument/didSave";
struct TextDocumentDidSaveNotification : public NotificationMessage<TextDocumentDidSaveName, DidSaveTextDocumentParams>
{
};

inline constexpr char TextDocumentWillSaveName[] = "textDocument/willSave";
struct TextDocumentWillSaveNotification
    : public NotificationMessage<TextDocumentWillSaveName, WillSaveTextDocumentParams>
{
};

inline constexpr char WorkspaceDidChangeWatchedFilesName[] = "workspace/didChangeWatchedFiles";
struct WorkspaceDidChangeWatchedFilesNotification
    : public NotificationMessage<WorkspaceDidChangeWatchedFilesName, DidChangeWatchedFilesParams>
{
};

inline constexpr char TextDocumentPublishDiagnosticsName[] = "textDocument/publishDiagnostics";
struct TextDocumentPublishDiagnosticsNotification
    : public NotificationMessage<TextDocumentPublishDiagnosticsName, PublishDiagnosticsParams>
{
};

inline constexpr char SetTraceName[] = "$/setTrace";
struct SetTraceNotification : public NotificationMessage<SetTraceName, SetTraceParams>
{
};

inline constexpr char LogTraceName[] = "$/logTrace";
struct LogTraceNotification : public NotificationMessage<LogTraceName, LogTraceParams>
{
};

inline constexpr char CancelRequestName[] = "$/cancelRequest";
struct CancelRequestNotification : public NotificationMessage<CancelRequestName, CancelParams>
{
};

inline constexpr char ProgressName[] = "$/progress";
struct ProgressNotification : public NotificationMessage<ProgressName, ProgressParams>
{
};

}
