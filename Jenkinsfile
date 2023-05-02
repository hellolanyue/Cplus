pipeline {
    agent any
    parameters {
        string(name: 'project_name', defaultValue: '自己项目名称', description: '项目jar名称')
        string(name: 'version', defaultValue: 'test', description: '部署环境')
        string(name: 'user_name', defaultValue: 'aqsc', description: '操作系统登录名')
    }
	stages{
        stage('构建') {
            steps {
                sh '''
                pwd
                echo "create a new pipeline"
                '''
            }
        }
	}
        
}