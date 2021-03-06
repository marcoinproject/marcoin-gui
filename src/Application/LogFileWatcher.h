/*
 * Copyright (c) 2018, The Marcoin Developers.
 * Portions Copyright (c) 2012-2017, The CryptoNote Developers, The Bytecoin Developers.
 *
 * This file is part of Marcoin.
 *
 * This file is subject to the terms and conditions defined in the
 * file 'LICENSE', which is part of this source code package.
 */

#pragma once

#include <QObject>

class QFile;
class QFileSystemWatcher;

namespace WalletGui {

class LogFileWatcher : public QObject {
  Q_OBJECT
  Q_DISABLE_COPY(LogFileWatcher)

public:
  LogFileWatcher(const QString& _filePath, QObject* _parent);
  ~LogFileWatcher();

protected:
  void timerEvent(QTimerEvent* _event) override;

private:
  int m_fileCheckTimer;
  QFile* m_logFile;

  void fileChanged();

Q_SIGNALS:
  void newLogStringSignal(const QString& _string);
};

}
